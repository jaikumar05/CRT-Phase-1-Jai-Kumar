#include<iostream>
using namespace std;

int fun(int n){
if (n == 0){
    return 1;
}
if (n == 1){
    return 2;
}
return (n/2 == 0) && fun(n/2);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(fun(n)){
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}