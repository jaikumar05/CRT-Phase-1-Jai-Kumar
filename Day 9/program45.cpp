//Abstraction

#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;

    public:
    ATM(){
        balance = 10000;
    }
    void withdraw(int amount){
        if(amount > balance){
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal Amount = " << amount << endl;
        }
    }
    void showBalance(){
                    cout << "Withdrawal successful! Remaining balance: " << balance << endl;
    }
};

int main(){
    ATM atm;
    int amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    atm.withdraw(amount);
    atm.showBalance();
    return 0;
}
    


