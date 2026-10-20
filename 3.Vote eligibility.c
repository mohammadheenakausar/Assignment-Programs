#include<stdio.h>
void main()
{
int a;
printf("\n Enter age value:");
scanf("%d",&a);
if (a>=18)
printf("\n %d is an eligible age to vote ",a);
else
printf("\n %d is not an eligible age to vote",a);
}