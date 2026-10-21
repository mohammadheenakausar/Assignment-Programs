#include<stdio.h>
void main()
{
int a;
printf("\n Enter an integer:");
scanf("%d",&a);
if (a<0)
printf("\n %d is a negative number ",a);
else if(a>0)
printf("\n %d is a positive number",a);
else
printf("\n The number is 0");
}