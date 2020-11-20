#include<bits/stdc++.h>
using namespace std;
void sorting(int a[],int n)
{ 
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        j=i-1;
        temp=a[i];
        while (a[j]>=temp && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sorting(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}