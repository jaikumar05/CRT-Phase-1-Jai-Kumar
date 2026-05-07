//Q.Create a single parent class of collage extend with students and teachers class,
//                        collage- name and age
//                        student -rollno, mobile no, mailid, batch, course
//                        teacher - name,age, department, subject, salary
//
//                        and call a virtual function to show their classes 

#include<iostream>
using namespace std;

class Collage{
    public:
    string name;
    int age;

    Collage(string name, int age){
        this->name = name;
        this->age =age;
    }

    virtual void show(){
        cout << "Collage Name: " << name << endl;
        cout << "Collage Age: " << age << endl;
    }
};

    class Student : public Collage{
        public:
        int rollno;
        long long mobile_no;
        string mailid;
        string batch;
        string course;
        
        Student(string name, int age, int rollno, long long mobile_no, string mailid, string batch, string course) : Collage(name, age){
            this->rollno = rollno;
            this->mobile_no = mobile_no;
            this->mailid = mailid;
            this->batch = batch;
            this->course = course;
        }
    };

    class Teacher : public Collage{
        public:
        string name;
        int age;
        string department;
        string subject;
        int salary;

        Teacher(string name, int age, string department, string subject, int salary) : Collage(name, age){
            this->department = department;
            this->subject = subject;
            this->salary = salary;
        }
    };


    int main(){
        Student s1("Jecrc ", 10, 101, 9875683945, "student@gmail.com", "2026 A", "C++");
        Teacher t1("Jecrc ", 20, "Computer Science", "C++", 50000);
        s1.show();
        t1.show();
        return 0;
    }

