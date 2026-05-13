#include<iostream>
using namespace std;

int main(){
    int arr [5];
    // Taking input form the user and storing it in the array
    for(int i = 0; i < 5; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    //Printing the array elements 
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}