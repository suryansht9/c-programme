#include<stdio.h>

int main () {
int year;
printf("HEy user please enter the  year : ");
scanf("%d",&year);
if (year%4 == 0 ){printf("yes it is leap year");}
else{printf("Your entered year is not leap year");}
return 0;
} 