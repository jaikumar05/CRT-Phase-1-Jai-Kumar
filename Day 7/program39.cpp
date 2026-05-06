//write a c++ program to create a student management system, which stores and display a students details
// first name,roll no, email id, phone number, batch, CRT class number
// do it using constructor overloading

#include<iostream>
using namespace std;

class Student{ // we created a class here name Student
    public:
    int rollno;
    string name;
    string email;
    int phone;
    string batch;
    int crt_class;

    Student(){ // details of first student using default constructor
        rollno = 194;
        name = "Krish";
        email = "krish@gmail.com";
        phone = "776838345";
        batch = "2026";
        crt_class = 5;
    }

    Student(string name, int rollno, string email, int phone, string batch, int crt_class){ // details of second student using parameterized constructor
        this -> name = name;
        this -> rollno = rollno;
        this -> email = email;
        this -> phone = phone;
        this -> batch = batch;
        this -> crt_class = crt_class;
    }

     void show() { // showing the details of the student
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Batch: " << batch << endl;
        cout << "CRT Class No: " << crt_class << endl;
        cout << "-----------------------" << endl;
     }
};

int main() {  // calling the main function to create objects of the students
    Student s1;
    cout << "Details of Student 1 :" << endl;
    s1.show();

    Student s2("Jai Kumar", 101, "jai@example.com", "9876543210", "2026", 5);
    cout << "Details of Student 2 :" << endl;
    s2.show();

    return 0;
}