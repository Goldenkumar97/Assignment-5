//10. Write a program to print a table of N.
#include"stdio.h"
int main()
{
int i,num;
printf("Enter a number ");
scanf("%d",&num);
for(i=1;i<=10;i++)
printf("%dx%d=%d\n",i,num,num*i);

    return 0;
}