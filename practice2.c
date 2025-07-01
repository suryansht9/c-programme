#include<stdio.h>

int main () {
int a;
printf("hey please enter the obtain marks of student :");
scanf("%d",&a);
if (a>=90 && a<=100)
{printf("You obtained grade A :");}
else if (a>=80 && a<=90)
{printf("You obtained grade B :");}
else if (a>=70 && a<=80)
{printf("You obtained grade C :");}
else if (a>=60 && a<=70)
{printf("You obtained grade D :");}
else if (a>=50 && a<=60)
{printf("You obtained grade E :");}
else if (a<=49) 
{printf("You obtained grade F:");}
else{printf("you have entered wrong data");}
return 0;
}