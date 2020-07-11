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

struct Address
{
    string street, city;
    int suite;

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
};

struct Contact
{
    string name;
    Address* address;

    Contact(const string &name, Address *address) : name(name), address(address) {}

    Contact(const Contact& other)
        : name {other.name}
        , address{ new Address{*other.address}} {} // (deep) copy constructor

    friend ostream &operator<<(ostream &os, const Contact &contact) {
        os << "name: " << contact.name << " address: " << *contact.address;
        return os;
    }
};

// Create a global instance of the object to be a prototype.
// But not obvious enough.  Not constrained enough.
Contact homeOffice{"", new Address{"123 East Drive", "London", 0}};

int main()
{
    Contact john{"John Doe", new Address{"123 East Dr", "London", 123}};
    // Duplicate code way:
    // contact jane{"Jane Doe", Address{"123 East Dr", "London", 103}};
    // More efficient:
    // Contact jane = john; // shallow copy.
    Contact jane{john}; // Use deep copy.
    jane.name = "Jane Smith";
    jane.address->suite = 103;

    cout << john << endl << jane << endl;
}