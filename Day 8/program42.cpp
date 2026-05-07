#include <iostream>

using namespace std;
class Player
{
public:
    string name;
    int runs;

    void setName(string n)
    {
        name = n;
    }
    void setRuns(int r)
    {
        runs = r;
    }
};
class Cricketer : public Player
{
public:
    string country;
    void setCountry(string s)
    {
        country = s;
    }
};

class Batter : public Cricketer
{
public:
    int centuries;
    void setCenturies(int c)
    {
        centuries = c;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
        cout << "Centuries: " << centuries << endl;
    }
};
int main()
{
    int runs;
    cout << "Enter runs scored by the cricketer: ";
    cin >> runs;
    Batter c1;
    c1.setCountry("India");
    c1.setName("Virat kohli");
    c1.setRuns(runs);
    c1.setCenturies(43);
    c1.show();
    return 0;
}