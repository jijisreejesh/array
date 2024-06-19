#include<stdio.h>
#include<string.h>
void main()
{
    char s[15],d[30];
    int i,sum=0;
    printf("Enter the string  : ");
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
        sum=sum+1;
        }
    }
    printf("number of vowels %d",sum);
    printf("\nEnter another string  : ");
    gets (d);
    sum=0;
    for(i=0;i<strlen(d);i++)
    {
        if(d[i]=='a'||d[i]=='A'||d[i]=='e'||d[i]=='E'||d[i]=='i'||d[i]=='I'||d[i]=='o'||d[i]=='O'||d[i]=='u'||d[i]=='U')
        {
        sum=sum+1;
        }
    }
    printf("\nnumber of vowels %d",sum);
}