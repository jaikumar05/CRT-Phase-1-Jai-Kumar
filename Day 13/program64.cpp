//Factorial reverse
#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}