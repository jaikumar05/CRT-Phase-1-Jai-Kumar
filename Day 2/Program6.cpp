#include<iostream>
using namespace std;
    
    int main(){
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if(age >=80 && age <=99){
            cout << "You are eligible to vote and a Senior Citizen" << endl;
        } else if(age >=100){
            cout << "You are eligible to vote and a Century Person" << endl;
        } else if(age >=18 && age <79){
            cout << "You are eligible to vote." << endl;
        } else if(age >=0 && age <=17) {
            cout << "You are not eligible to vote. Children are not allowed to vote." << endl;
        } else {
            cout << "Invalid age entered." << endl;
        }
        return 0;
    }