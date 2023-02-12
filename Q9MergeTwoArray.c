/*Write a function in C to merge two arrays of the same size sorted in descending
order*/

#include<stdio.h>

void sort(int a[],int size)
{
    int i,temp=0;
    for(i=0;i<size-1;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void merge(int a[],int b[],int x,int y,int r[],int size)
{
    int i=0,j=0,k=0;
    while(i<x && j<y)
    {
        if(a[i]<b[j])
        {
            r[k]=a[i];
            k++;
            i++;
        }
        else{
            r[k]=b[j];
            k++;
            j++;
        }
        while(i<x)
        {
            r[k]=a[i];
            k++;
            i++;
        }
        while(j<y)
        {
            r[k]=b[j];
            k++;
            j++;
        }
    }
    sort(r,size);
    
}

int main()
{
    int a1[]={2,3,5,7,9};
    int a2[]={1,7,5,6,8};
    int m[10];
    merge(a1,a2,5,5,m,10);
    printf("Merge array in decending order\n");
    //sort(m,10);
    for(int i=10;i>0;i--)
    {
        printf("%d\t",m[i]);
    }
    return 0;
}