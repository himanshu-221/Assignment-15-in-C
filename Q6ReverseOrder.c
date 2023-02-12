/*Write a function in C to read n number of values in an array and display it in reverse
order*/
#include<stdio.h>
void reverse(int a[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int arr[5]={1,2,3,4,5},i;
    reverse(arr,5);
    return 0;
}