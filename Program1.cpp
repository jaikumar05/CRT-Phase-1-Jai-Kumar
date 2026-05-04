#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    double cel, fah;
    cout << "Enter the temperature in Celsius: ";
    if (!(cin >> cel)) {
        cerr << "Invalid input\n";
        return 1;
    }
    fah = (cel * 9.0 / 5.0) + 32.0;
    cout << "The temperature in Fahrenheit is: " << fah << endl;
    return 0;
}