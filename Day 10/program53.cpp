//Finding maximum value in an array

#include <iostream>
using namespace std;

class Max{
    public:
    int max_of_array(int arr[], int n){
        int max = arr[0];
        for (int i = 1; i < n; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};
         
    int main(){
        int arr[5];
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++){
            cin >> arr[i];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        Max s1;
        int ans = s1.max_of_array(arr, n);
        cout << "Maximum value in the array is: " << ans << endl;
        return 0;

}