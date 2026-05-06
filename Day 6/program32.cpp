#include <iostream>
using namespace std;

// Apply 10% discount by reference (updates original bill)
void applyDiscount(double &bill) {
    bill = bill - (bill * 0.10);
    // or: bill *= 0.90;
}

int main() {
    double bill;
    cout << "Enter bill amount: ";
    cin >> bill;

    applyDiscount(bill);  // bill gets updated here

    cout << "Bill after 10% discount: " << bill << endl;
    return 0;
}
