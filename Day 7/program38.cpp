#include<iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;
};

Student(){
    rollno = 0;
    name = "Your name Please = ";
}

Student(string name, int rollno){
    this -> name = name;
    this -> rollno = rollno;
}
 void show(){
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
 }

int main(){
    Student student1;
    student1.show();
    return 0;
}   