//sum of given numbers using recursion 
#include<iostream>
using namespace std;

int sum(int a, int b){
    if(b == 0){
        return a;
    }
    return sum(a + 1, b - 1);
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " is: " << sum(a, b) << endl;
    return 0;
}
