#include<stdio.h>
void bubblesort(int A[],int n)
{
    int i,j,k;
    k=n-1-i;
    int flag=0;
    for(i=0;i<n-1;i++,k--)
    {
        for(j=0;j<k;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
int main()
{
    int a[5]={3,2,6,1,5};
    bubblesort(a,5);
    int i;
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}