#include<stdio.h>
   
int main()
{   
    char str[20];
    int i=0,s=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
      s++;  
      i++;
    }
    printf("Length of string : %d",s);
   
    return 0;

}