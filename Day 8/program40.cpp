#include <iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;

    Cricketers(const string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    Cricketers(const Cricketers &c){
        name = c.name;
        runs = c.runs;
    }
};

int main(){
    Cricketers c1("Virat Kohli", 12000);
    cout << "Cricketer Name: " << c1.name << endl;
    cout << "Runs Scored: " << c1.runs << endl;

    Cricketers c2(c1); 
    cout << "Cricketer Name: " << c2.name << endl;
    cout << "Runs Scored: " << c2.runs << endl;

    return 0;
}