#include<iostream>
using namespace std;

int main(){
    int value = 100;
    int *ptr = &value;  
    cout << "Value: " << value << endl;      
    cout << "Address of value: " << &value << endl;
    *ptr = 200;
    cout << "value of ptr = " << *ptr << endl;  
    cout << "Value: " << value << endl;       
    return 0;
}
