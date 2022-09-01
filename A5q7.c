//7. Write a program to print the first N even natural numbers in reverse order.
#include"stdio.h"
int main()
{
int i,num;
printf("Enter number ");
scanf("%d",&num);
for(i=num;i>=1;i--)
printf("%d ",2*i);
    return 0;
}