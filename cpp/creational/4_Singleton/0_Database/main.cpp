#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <map>
using namespace std;

#include <boost/lexical_cast/lexical_cast_old.hpp>
using namespace boost;

class SingletonDatabase
{
    SingletonDatabase()
    {
        cout << "Initializing database." << endl;
        std::ifstream ifs("C:/Users/orbit/Documents/code/DesignPatterns/cpp/creational/4_Singleton/0_Database/capitals.txt");

        string s, s2;

        while (std::getline(ifs, s))
        {
            std::getline(ifs, s2);
            int pop = lexical_cast<int>(s2);
            capitals[s] = pop;
        }
    }
    map<string, int> capitals;
public:
    // ensure this can't be copied.
    SingletonDatabase(SingletonDatabase const&) = delete;
    void operator=(SingletonDatabase const&) = delete;

    static SingletonDatabase& get()
    {
        static SingletonDatabase db;
        return db;
    }
    int get_population(const string& name)
    {
        return capitals[name];
    }
};
int main()
{
    string city = "Tokyo";
    cout << city << " has population " <<
        SingletonDatabase::get().get_population(city) << endl;
}