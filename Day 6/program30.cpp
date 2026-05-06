#include <iostream>
using namespace std;

int totalVolume(int bottles) {
    return bottles * 250;
}

int main() {
    int bottles;
    cout << "Enter number of coke bottles: ";
    cin >> bottles;

    int volume = totalVolume(bottles);
    cout << "Total volume of coke = " << volume << " ml" << endl;
    return 0;

}
