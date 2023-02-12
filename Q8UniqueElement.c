/*Write a function in C to print all unique elements in an array*/

#include<stdio.h>
void unique(int a[],int b[],int size,int s)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        b[a[i]]++;
    }
    /*printing uniqe elements using hash techniqe*/
    for(j=0;j<s;j++)
    {
        if(b[j]==1)
        {
            printf("%d\n",j);
        }
    }
}

int main()
{
    int arr[7]={3,5,6,7,3,4,5};
    int hash[10]={0};
    unique(arr,hash,7,10);
    return 0;
}