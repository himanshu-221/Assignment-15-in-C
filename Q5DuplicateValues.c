/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/
#include<stdio.h>

int  duplicate(int x[],int y[],int size,int s)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        y[x[i]]++;
    }
    for(j=0;j<s;j++)
    {
        if(y[j]==2)
        {
            for(i=0;i<size;i++)
            {
                if(x[i]==j)
                {
                    return i+1;
                }
            }
            break;
        }
    }
    
}
int main()
{
    int arr[12]={1,7,6,8,2,4,3,5,3,6,3,0};
    int hash[10]={0};
    printf("%d", duplicate(arr,hash,12,10));
    return 0;
}