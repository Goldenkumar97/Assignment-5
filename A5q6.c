//6. Write a program to print the first N even natural numbers.
#include"stdio.h"
int main()
{
int i,num;
printf("Enter number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
printf("%d ",2*i);
    return 0;
}