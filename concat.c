#include<stdio.h>
#include<string.h>
//#define MAX 50
void main()
{
    char s[50],p[50];
    printf("Enter 2 strings : ");
    gets(s);
    gets(p);
    strcat(s," ");
    strcat(s,p);
    printf("After concatination string is : %s",s);
}