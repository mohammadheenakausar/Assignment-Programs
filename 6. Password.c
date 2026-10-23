#include<stdio.h>
void main()
{
int uid,pw;
printf("\n Enter the user ID:");
scanf ("%d",&uid);
if(uid!=101)
printf("\n User not found");
else
printf("\n Enter the password:");
scanf("%d",&pw);
if (pw==4321)
printf("\n Login Successful");
else
printf("\n Incorrect password");
}