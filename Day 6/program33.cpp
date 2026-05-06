#include<iostream>
using namespace std;

void disc(double &bill){
    bill = bill * 0.90;
}

int main(){
     double bill = 250.60;
     cout << "bill" << bill << endl;
     disc(bill);
     cout << bill << endl;
     return 0;
}
