#include<iostream>
using namespace std;

int main()
{
    cout<<"Number of elements: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input space seperated array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    cout<<"Sorted array: "<<endl;

    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}