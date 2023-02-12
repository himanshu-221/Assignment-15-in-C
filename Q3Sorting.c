/*Write a function to sort an array of any size. (TSRN)*/
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
    printf("\nPrinting sorted array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
int  main()
{
    int n,i;
    printf("Enter the size pf array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}