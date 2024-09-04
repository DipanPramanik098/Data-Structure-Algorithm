#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void quickSort(int arr[], int low, int high)
{
    // code here
    if (low >= high)
        return;
    int pivot = high;
    int i = low - 1;
    int j = low;

    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}
int main()
{

    return 0;
}