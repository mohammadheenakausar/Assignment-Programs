#include<stdio.h>
void main()
{
float b, h, w;
printf("\n Enter the person's height and weight:");
scanf("%f%f",&h,&w);
b=w/(h*h);
printf("\n BMI=%.2f",b);
if (b<18.5)
printf("\n Underweight");
else if  (b<25)
printf("\n Normal");
else if (b<30)
printf("\n Overweight");
else
printf("\n Obese");
}