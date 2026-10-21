#include<stdio.h>
void main()
{
int a;
printf("\n Enter the student's mark out of 100:");
scanf("%d",&a);
if (a<0 || a>100)
printf("\n %d is invalid mark ",a);
else if(a>=90)
printf("\n Grade O");
else if(a>=80)
printf("\n Grade A+");
else if(a>=70)
printf("\n Grade A");
else if(a>=60)
printf("\n Grade B");
else if(a>=50)
printf("\n Grade C");
else
printf("\n Fail");
}