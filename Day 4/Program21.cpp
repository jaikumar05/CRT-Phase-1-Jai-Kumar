#include<iostream>
using namespace std;

int main(){
    int n,factorial;
    cout << "Enter the integer : ";
    cin >> n;
    factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}