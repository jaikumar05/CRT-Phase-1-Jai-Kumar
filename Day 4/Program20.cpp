#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter an integer: ";
    cin >> i;
    do {
        cout << i << " ";
        i++; 
    } while (i <= 5); 
    return 0;
}
