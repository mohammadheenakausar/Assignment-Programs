#include<stdio.h>
void main()
{
float l, b, a, p ;
printf("\n Enter the length and breadth of the rectangle:");
scanf("%f%f",&l,&b);
a=l*b;
printf("\n The Area of the rectangle is %f",a);
p=2*(l+b);
printf("\n The Perimeter of the rectangle is %f",p);
}