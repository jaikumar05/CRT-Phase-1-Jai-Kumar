#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    if(n < 2){
        cout << n << "is not prime" << endl;
    }
    else if (n == 2){
        cout << n << "is prime" << endl;
    }
    else if (n % 2 == 0){
        cout << n << "is not prime" << endl;
        bool is_prime = true;
        for (int i = 3; i <= n/2; i += 2){
            if (n % i == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime){
            cout << n << "is prime" << endl;
        } else {
            cout << n << "is not prime" << endl;
        }
    }
}