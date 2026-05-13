#include <iostream>
#include <vector>
using namespace std;

void Insertion_Sort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}

int main()
{
    int arr[6] = {8, 7, 3, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    Insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}