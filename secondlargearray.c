#include<stdio.h>
void main()
{
    int i,a[50],n,s=0,temp;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(s<a[i])
        {
            temp=s;
            s=a[i];
        }
    }
    printf("Second LArgest Num : %d",temp);
}