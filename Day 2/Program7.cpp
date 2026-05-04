#include<iostream>
using namespace std;

    int main(){ 
        int a,b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        if(a > b){
            cout << "The larger number is: " << a << endl;
        } else if(b > a){
            cout << "The larger number is: " << b << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }
        return 0;
    }