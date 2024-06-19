#include<stdio.h>
swap(int *m,int *n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
void main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swaping : %d , %d\n",a,b);
    swap(&a,&b);
    printf("After swaping : %d , %d",a,b);
    }