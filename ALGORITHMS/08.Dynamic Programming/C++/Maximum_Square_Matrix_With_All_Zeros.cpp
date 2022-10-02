#include <iostream>
#include<climits>
using namespace std;


int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
	//Write your code here
    if(n==0 || m==0)
    {
        return 0;
    }
    int **brr=new int*[n];
    for(int i=0; i<n; i++)
    {
        brr[i]=new int[m];
    }
    for(int i=0; i<m; i++)
    {
        if(arr[0][i]==0)
        {
            brr[0][i]=1;
        }
        else
        {
            brr[0][i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i][0]==0)
        {
            brr[i][0]=1;
        }
        else
        {
            brr[i][0]=0;
        }
    }
    int maxi=INT_MIN;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(arr[i][j]==0)
            {
                brr[i][j]=min(min(brr[i-1][j], brr[i][j-1]), brr[i-1][j-1])+1;
            }
            else
            {
                brr[i][j]=0;
            }
            if(brr[i][j]>maxi)
        	{
        	    maxi=brr[i][j];
        	}
        }
    }
    return maxi;
}

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}
