#include <string>
#include <vector>
#include <ostream>
#include <iostream>
using namespace std;

struct Code{
    std::string name;
    std::vector<std::pair<std::string, std::string>> fields;
    // constructors
    Code() = default;

    friend ostream &operator<<(ostream &os, const Code &code) {
        os << "class " << code.name << endl;
        os << '{' << endl;
        for (const auto& f: code.fields)
            os << "  " << f.first << ' ' << f.second << ';' << endl;
        os << "};" << endl;
        return os;
    }
};

class CodeBuilder
{


public:
    explicit CodeBuilder(const string& class_name)
    {
        root.name = class_name;
    }

    CodeBuilder& add_field(const string& name, const string& type)
    {
        root.fields.emplace_back(make_pair(type,name));
        return *this;
    }

    friend ostream &operator<<(ostream &os, const CodeBuilder &builder) {
        os << builder.root;
        return os;
    }

    Code root;
};

int main(){
    // This code:
    auto cb = CodeBuilder{"Person"}.add_field("name","string").add_field("age","int");
    cout << cb;

    /* Should return:
     * class Person
     * {
     *   string name;
     *   int age;
     * };
     * Mind the curly brace placement and 2-space indentation
    */
}