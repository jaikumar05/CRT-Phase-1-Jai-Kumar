#include<iostream>
using namespace std;

void applyDiscount(double &bill){
    bill = bill - (bill * 0.10);
}

int main(){
    double bill:
    cout << "Enter the bill amount:";
    cin >> bill;
    
    applyDiscount(bill);
    cout << "Bill after discount: " << bill << endl;
    return 0;
}
