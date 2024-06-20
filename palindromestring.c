#include<Stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int j=0,i,flag=0,t,t1;
    printf("Enter a string : ");
    gets(s);
    i=strlen(s)-1;
    j=0;t=i;t1=j;
  if(i%2==0)
   {
    while(i!=j)
    {    
    if(s[j]!=s[i])
    {
     flag=1;break;
    }
     else
     {
        i--;
        j++;
     }
    }
   }
   else
   {
     while(t!=j&&t1!=i)
    {    
    if(s[j]!=s[i])
    {
     flag=1;break;
    }
     else
     {
        t=i;t1=j;
        i--;
        j++;
     }
    }
   }
  
    if(flag==0)
    printf("Given string is palindrome");
    else
    printf("Given string is not palindrome");
}