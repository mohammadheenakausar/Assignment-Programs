#include<stdio.h>
void main()
{
int age, credit;
float income;
printf("\n Enter age, credit score and monthly income:");
scanf ("%d%d%f",&age,&credit,&income);
if(age<21||age>60)
printf("\n Loan rejected: age not in 21 and 60");
else if (income<25000)
printf("\n Loan rejected: income below 25000");
else if (credit<700)
printf("\n Loan rejected: credit score below 700");
else
printf("\n Loan approved");
}