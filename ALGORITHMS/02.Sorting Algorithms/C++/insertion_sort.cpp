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

    for(int i=1; i<n; i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j +1] = curr; 
    }
    
    cout<<"Sorted array: "<<endl;

    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}