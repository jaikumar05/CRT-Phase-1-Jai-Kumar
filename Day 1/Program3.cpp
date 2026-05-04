#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    bool is_equilateral = (side1 == side2) && (side2 == side3);
    cout << (is_equilateral ? "Triangle is equilateral" : "Triangle is not equilateral") << endl;
    
    return 0;
}
