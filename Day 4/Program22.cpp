#include<iostream>
using namespace std;
 
    int main(){
        int n;
        cout << "Enter the Fibonacci terms = ";

        if(!(cin >> n)){
            cerr << "Invalid input" << endl;
            return 1;
        }
        if(n <=0 ){
            cout << "Please enter a +ve Integer." << endl;
            return 1;
        }
        int a=0 , b=1;
        cout << "First " << n << " terms of Fibonacci series: " << endl;
        for(int i=1; i<=n; i++){
            cout << a << " ";
            int next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
        return 0;
    }