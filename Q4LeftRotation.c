#include<stdio.h>
void leftrotation(int a[],int d)
{
    int i,j,temp=0;
    for(i=0;i<d;i++)
        {
            temp=a[4];
            for(j=4;j>0;j--)
            {
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[j]);
        }
}
int main()
{
    int arr[5]={2,3,4,5,6};
    int d;
    printf("Enter rotation value\n");
    scanf("%d",&d);
    leftrotation(arr,d);
    return 0;
    
}