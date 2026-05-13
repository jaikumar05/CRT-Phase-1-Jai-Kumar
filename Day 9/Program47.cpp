//Friend Function 

#include<iostream>
using namespace std;

class Area{
    private:
    int length;
    int width;
    
    public:
    //Constructor
    Area(int l, int w){
        length = l;
        width = w;
    }
    
    friend void showArea(Area a); // friend function declaration
};

void showArea(Area a){ // friend function definition
    int area = a.length * a.width;
    cout << "Area of the rectangle: " << area << endl;
}

int main(){

    int length;
    int width;
    cout << "Enter length =  "<< endl;
    cin >> length;
    cout << "Enter width = "<< endl;
    cin >> width;
    Area a(length, width);
    showArea(a);
    return 0;
}
