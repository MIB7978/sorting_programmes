#include<stdio.h>
void Insertionsort(int A[],int n)
{
    int i;
    int hole;
    int j;
    for(i=1;i<n;i++)
    {
        hole=i;
        j=A[i];
        while (hole>0 && A[hole-1]>j)
        {
            A[hole]=A[hole-1];
            hole--;
        }
        A[hole]=j;
    }
}
int main()
{
    int a[5]={3,2,6,1,5};
    Insertionsort(a,5);
    int i;
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}