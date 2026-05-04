#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number = ";
    cin >> n;
    
    cout << "Numbers from 1 to" << n << "(not multiples of 4): " << endl;
    for(int i=1; i<=n; i++){
        if(i % 4 != 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}