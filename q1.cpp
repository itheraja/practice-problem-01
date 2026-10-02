#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Sum = " << sumArray(arr, n);

    return 0;
}
