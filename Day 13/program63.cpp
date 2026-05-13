//Recurssion
#include<iostream>
using namespace std;

class Recurssion{
    public:
    int factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main(){
    Recurssion s1;
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    int result = s1.factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}