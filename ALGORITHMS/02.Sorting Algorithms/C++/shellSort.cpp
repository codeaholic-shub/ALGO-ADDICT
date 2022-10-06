#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap/=2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {4, 2, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    printArray(arr, size);
}