#include<stdio.h>

int main () {
int a,b,c,d;
printf("HEy user please enter the value of a \n");
scanf("%d",&a);
printf("HEy user please enter the value of b \n");
scanf("%d",&b);
printf("HEy user please enter the value of c \n");
scanf("%d",&c);
printf("HEy user please enter the value of d \n");
scanf("%d",&d);
if (a>b && a>c && a>d){printf("a is the greatest among of all");}
else if (b>a && b>c && b>d){printf("b is the greatest among of all");}
else if (c>b && c>a && c>d){printf("c is the greatest among of all");}
else if (d>a && d>b && d>c){printf("d is the greatest among of all");}
else{printf("Please enter correct data");}

return 0;
}