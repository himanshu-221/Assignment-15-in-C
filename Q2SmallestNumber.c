/*Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int smallest(int a[],int size)
{
    int i,min;
    
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int arr[5]={5,7,34,8,3},min;
    min=smallest(arr,5);
    printf("minimum element is = %d",min);
    return 0;
}