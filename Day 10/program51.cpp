#include <iostream>

using namespace std;
class Sum
{
public:
    int sum_of_array(int arr[], int n)
    {

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
int main()
{
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    Sum s1;
    int ans = s1.sum_of_array(arr, n);
    cout << ans << endl;
    return 0;
}