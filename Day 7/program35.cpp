#include <iostream>
using namespace std;

class Classroom {
public:
    int rollno;
    string name;

    void show(){
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    Classroom student1;
    student1.rollno = 1945;
    student1.name = "Jai Kumar";
    student1.show();

    return 0;
}