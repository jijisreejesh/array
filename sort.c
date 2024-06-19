#include<stdio.h>
void main()
{
    int a[25],i,j,temp,n;
    printf("Enter the limit  : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers after sorting : \n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}