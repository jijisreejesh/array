#include<stdio.h>
struct employee
{
    char name[15];
    int age;
    double salary;
};
void main()
{
    struct employee e[10];
    int n,i;
    printf("Enter the number of employees  :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name , age and salary : \n ");
        scanf("%s%d%lf",e[i].name,&e[i].age,&e[i].salary);
    }
    printf("Details of employees are : ");
    printf("\nName     age     salary\n");
    for(i=0;i<n;i++)
    {
        printf("%s     %d     %lf\n",e[i].name,e[i].age,e[i].salary);
    }
}