#include<iosteram>
using namespace std;

int main(){
    int num, sum =0;
    cout << "Enter the integers (enter a negative number to stop):\n";
    while(true{
        cout<< "Enter an integer: ";
        if(!(cin >> num)){
            cerr << "Invalid input. Please enter an integer.\n";
            return 1;
        }
        if (num < 0){
            cout << "Negative number entered. Stopping...\n";
            break;
        }
        sum += num;
    }
}