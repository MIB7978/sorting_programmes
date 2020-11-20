#include<stdio.h>
void Selection_sort(int A[],int n)
{
    int imin,i;
    int j;
    for(i=0;i<n-1;i++)
    {
        imin=i;
        for(j=i+1;j<n;j++){
        if(A[j]<A[imin])
        imin=j;}
    
    int temp;
    temp=A[imin];
    A[imin]=A[i];
    A[i]=temp;
    }
}
int main()
{
    int a[5]={3,2,6,1,5};
    Selection_sort(a,5);
    int i;
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}