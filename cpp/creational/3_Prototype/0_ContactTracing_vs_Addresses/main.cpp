#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <tuple>
#include <sstream>
#include <memory>
#include <cmath>
using namespace std;

#include <boost/serialization/serialization.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
using namespace boost;


struct Address
{
    string street, city;
    int suite;

    Address() {}

    Address(const string &street,
            const string &city, int suite) :
            street(street), city(city), suite(suite) {}

    Address(const Address& address)
    : street{address.street}, city{address.city}, suite{address.suite}
    {}

    friend ostream &operator<<(ostream &os, const Address &address) {
        os << "street: " << address.street << " city: "
        << address.city << " suite: " << address.suite;
        return os;
    }
private:
    friend class serialization::access;
    template <class archive>
    void serialize(archive& ar, const unsigned version)
    {
        ar & street;
        ar & city;
        ar & suite;
    }
};

struct Contact
{
    string name;
    Address* address;

    Contact() {}

    Contact(const string &name, Address *address) : name(name), address(address) {}

    Contact(const Contact& other)
        : name {other.name}
        , address{ new Address{*other.address}} {} // (deep) copy constructor

    friend ostream &operator<<(ostream &os, const Contact &contact) {
        os << "name: " << contact.name << " address: " << *contact.address;
        return os;
    }
private:
    friend class serialization::access;
    template <class archive>
      void serialize(archive& ar, const unsigned version)
    {
      ar & name;
      ar & address;
    }
};

// Create an employee factory
struct EmployeeFactory
{
    static unique_ptr<Contact> new_main_office_employee
            (const string& name, const int suite)
    {
        static Contact p{"", new Address{"123 East Drive", "London", 0}};
        return new_employee(name, suite, p);
    }
private:
    static unique_ptr<Contact> new_employee(const string& name, int suite,
            const Contact& prototype)
    {
        auto result = make_unique<Contact>(prototype);
        result->name = name;
        result->address-> suite = suite;
        return result;
    }
};


int main()
{
    auto clone = [](const Contact& c)
    {
        ostringstream oss;
        archive::text_oarchive oa(oss);
        oa << c;
        string s = oss.str();
        cout << s << endl;

        istringstream iss(s);
        archive::text_iarchive ia(iss);
        Contact result;
        ia >> result;
        return result;
    };
    auto john = EmployeeFactory::new_main_office_employee("John",123);
    auto jane = clone(*john);
    jane.name = "Jane";
    cout << *john << endl << jane << endl;
}