/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/
#include<stdio.h>

void duplicate(int x[],int y[],int size,int s)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        y[x[i]]++;
    }
    for(j=0;j<s;j++)
    {
        if(y[j]!=0)
        {
            printf("%d-->%d\n",j,y[j]);
        }
    }
    
}
int main()
{
    int arr[12]={2,4,6,8,2,4,3,5,3,6,3,1};
    int hash[10]={0};
    duplicate(arr,hash,12,10);
    return 0;
}