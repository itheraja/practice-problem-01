#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int maxRemaining = findMax(arr, n - 1);

    if (arr[n - 1] > maxRemaining)
        return arr[n - 1];
    else
        return maxRemaining;
}

int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int n = 5;

    cout << "Maximum = " << findMax(arr, n);

    return 0;
}
