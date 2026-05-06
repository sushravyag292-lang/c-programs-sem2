#include<stdio.h>
int main()
{
    int arr[100],n,pos,element,i;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter element to insert:");
    scanf("%d",&element);
    for(i=n;i>=0;i--)
    arr[i]=arr[i-1];
    arr[pos-1]=element;
    n++;
    printf("updated array:");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}