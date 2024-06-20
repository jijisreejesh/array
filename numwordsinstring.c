#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,d=1,c;
    char st[50];
    printf("Enter a string : ");
    gets(st);
    printf("String :%s\n",st);
    c=strlen(st);
    for(i=0;i<c;i++)
    {
       if((st[i]==' ') && (st[i+1]!=' '))
        {
            d++;
        }
      
    }
    printf("Number of Words : %d",d);
}