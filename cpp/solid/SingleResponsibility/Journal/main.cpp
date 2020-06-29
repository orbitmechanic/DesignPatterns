#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost;

struct Journal{
    string title;
    vector<string> entries;

    Journal(const string &title) : title(title) {}

    void add_entry(const string& entry){
        static int count = 1;
        entries.push_back(lexical_cast<string>(count++) + ": " + entry);
    }

};

struct PersistenceManager {
    // central location where all objects are loaded/saved
    // more robust and reliable.
    // Centralizes all persistence code
    // Easier to refactor.
    static void save(const Journal& j, const string& filename){
        ofstream ofs(filename);
        for (auto& e: j.entries)
            ofs << e << endl;
    }
};

int main() {
    Journal journal{"Dear Diary"};
    journal.add_entry("I ate a bug");
    journal.add_entry("I cried today");

    // journal.save();

    PersistenceManager pm;
    pm.save(journal,"diary.txt");

    return 0;
}
