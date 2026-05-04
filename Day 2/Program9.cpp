#include<iostream>
using namespace std;
 
    int main(){
        int percentage;
        cout << "Enter your percentage = ";
        cin >> percentage;
        if(percentage >= 90 && percentage <=100){
            cout << "Grade A" << endl;
        } else if(percentage >=80 && percentage <=89){
            cout << "Grade B" << endl;
        } else if(percentage >=70 && percentage <=79){
            cout << "Grade C" << endl;
        } else if(percentage >=60 && percentage <=69)
        {
            cout << "Grade D" << endl;
        } else if(percentage >=0 && percentage <=59){
            cout << "Grade F" << endl;
        } else {
            cout << "Invalid percentage entered." << endl;
        }
    }