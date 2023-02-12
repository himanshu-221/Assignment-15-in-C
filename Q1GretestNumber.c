/*Write a function to find the greatest number from the given array of any size. (TSRS)*/

#include<stdio.h>
int gretest(int a[],int size)
{
    int i,max=0;
    
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int arr[5]={3,4,5,3,0},max;
    max=gretest(arr,5);
    printf("maximum element is = %d",max);
    return 0;
}