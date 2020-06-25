#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Journal
{
    string title;
    vector<string> entries;

    Journal(const string &title) : title(title) {}
};
int main() {
    getchar();
    return 0;
}
