/*Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)
*/
#include<stdio.h>
int duplicate(int a[],int size)
{
    int i,j,temp,count=0;
    for(i=0;i<size;i++)
    {
        temp=a[i];
        for(j=i;j<size;j++)
        {
            if(temp==a[j+1])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    int arr[10]={3,5,6,7,6,5,6,7,3,4},x;
    x=duplicate(arr,10);
    printf("Number of duplicate item in the array is %d\n",x);
    return 0;
}