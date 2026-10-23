#include<stdio.h>
void main()
{
float amount, discount=0, delivery =0, final ;
int member;
printf("\n Enter the order amount:");
scanf("%f",&amount);
printf("\n Enter the membership type (1-Premium, 0-Regular):");
scanf("%d",&member);
if(amount>=500)
{
delivery=0;
if (member==1)
discount=amount*10/100;
}
else delivery=50;
final=amount-discount+delivery;
printf("\n Final payable amount=Rs. %.2f",final);
}