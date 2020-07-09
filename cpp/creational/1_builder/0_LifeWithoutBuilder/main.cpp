#include <iostream>
#include <sstream>
#include <memory>
using namespace std;

int main() {
    // Brute force using overloaded concat operator
    auto text = "hello";
    string output;
    output += "<p>";
    output += text;
    output += "</p>";
    cout << output << endl;

    // Bit smarter using stdlib:
    string words[] = {"hello", "world"};
    ostringstream oss;
    oss << "<ul>";
    for(const auto& w : words)
        oss << "  <li>" << w << "</li>";
    oss << "</ul>";
    cout << oss.str() << endl;

    return 0;
}
