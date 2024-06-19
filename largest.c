#include<stdio.h>
void main()
{
    int a[25],i,j,s,n,temp,m;
    printf("Enter the limit  : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[j]<a[i])
        {
            temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
        }
        s=a[i];m=a[i-1];
    }
    printf("Largest num : %d\nsecond largest num : %d",s,m);
}