#include <iostream>
#include <string>
using namespace std;

/* Factory Coding Exercise
 * You are given a class called "Person".
 * The "Person has two fields: id, and name.
 */

struct Person
{
    int id;
    string name;
};

// Please implement a non-static PersonFactory
class PersonFactory
{
    int32_t  population{0};
public:
    // That has a create_person() method that takes a person's name.
    Person create_person(const string& name)
    {
        // The id of the person should be set as a
        // 0-based index of the object created.
        // So, the first person the factory makes should have id=0,
        // Second id=1 and so on.
        Person p;
        p.id = population++;
        p.name = name;
        return p;
    }
};

int main() {
    PersonFactory pf;
    Person Bob = pf.create_person("Bob");
    Person Sue = pf.create_person("Sue");
    cout << "Bob's name is:" << Bob.name << " id:" << Bob.id << endl;
    cout << "Sue's name is:" << Sue.name << " id:" << Sue.id << endl;
}
