#include<iostream>
using namespace std;

class Player{
    public:
    string name;
    int runs;

    void setName(string name){
        this->name = name;
    }

    void setRuns(int runs){
        this->runs = runs;
    }
};

class Cricketers : public Player{
    public:
       string country;
       Cricketers(string s){
        country = s;
       }

       void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
       }
};

int main(){
    int runs;
    cin >> runs;
    Cricketers c1("India");
    c1.setName("Virat Kohli");
    c1.setRuns(runs);
    c1.show();
    return 0;
}