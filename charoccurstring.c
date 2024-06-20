#include<stdio.h>
#include<string.h> 
int main()
{   
    char str[50],ch;
    int i=0,s=0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter a charcater want to check : ");
    scanf("%c",&ch);
    while(i<strlen(str))
    {
        if(str[i]==ch)
         s++;
         i++;
    }
    printf("Number  of occurence of %c in the  string is: %d",ch,s);
    return 0;
}