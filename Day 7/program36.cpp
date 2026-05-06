#include<iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;

    Student(){
        rollno = 0;
        name = "Unknown";
    }

    void show(){
// constructor moved inside the class definition above

Student(){
    this -> rollno = 0;
    this -> name = "Unknown";
}

int main(){
    Student student1;
    student1.show();

    return 0;
}