#include<stdio.h>
void main()
{
    int a[20][20],m,n,i,j;
    printf("Enter the 2 numbers : ");
    scanf("%d%d",&m,&n);
    printf("Enter the numbers");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }
}