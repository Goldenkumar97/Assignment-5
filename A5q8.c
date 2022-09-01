//8. Write a program to print squares of the first N natural numbers.
#include"stdio.h"
int main()
{
int i,num;
printf("Enter number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
printf("%d ",i*i*i);

    return 0;
}