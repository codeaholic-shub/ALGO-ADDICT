#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(int n,int m,int r,int c,string temp,int a[10][10])
{
    if(r<0 || c<0 || r==n || c==m)
    return;
    if(r==n-1 && c==m-1)
    {
        cout<<temp<<endl;
        return;
    }
    if(a[r-1][c]==0)
    {
        a[r-1][c]=1;
        fun(n,m,r-1,c,temp+"N ",a);
        a[r-1][c]=0;
    }
    if(a[r+1][c]==0)
    {
        a[r+1][c]=1;
        fun(n,m,r+1,c,temp+"S ",a);
        a[r+1][c]=0;
    }
    if(a[r][c-1]==0)
    {
        a[r][c-1]=1;
        fun(n,m,r,c-1,temp+"W ",a);
        a[r][c-1]=0;
    }
    if(a[r][c+1]==0)
    {
        a[r][c+1]=1;
        fun(n,m,r,c+1,temp+"E ",a);
        a[r][c+1]=0;
    }
}

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    fun(n,m,0,0,"",a);
}
