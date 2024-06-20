#include<stdio.h>
void main()
{
    int n,a[50],b[50],i,temp,j,m;
    printf("Enter the limit of first array : ");
    scanf("%d",&m);
    printf("Enter the  numbers : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the limit of second array : ");
    scanf("%d",&n);
    printf("Enter the  numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("First array after sorting :  ");
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
        printf("%d  ",a[i]);
    }
    printf("\nSecond array after sorting :  ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            }
        }
        printf("%d  ",b[i]);
    }
    printf("\nSingle Sorted array :  ");
    j=0;
    for(i=m;i<m+n;i++)
    {
        a[i]=b[j];j++;
    }
     for(i=0;i<m+n;i++)
    {
        for(j=i+1;j<m+n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
        printf("%d  ",a[i]);
    }
       
}