/*#include<stdio.h>

int main () {
int a;
int b;
int c;

printf("HEy please enter tha value of marks obtained in physics\n");
scanf("%d",&a);
printf("HEy please enter tha value of marks obtained in math\n");
scanf("%d",&b);
printf("HEy please enter tha value of marks obtained in english\n");
scanf("%d",&c);
a>=33?printf("you are passed in physics\n"):printf("you are not passed in physics\n");
b>=33?printf("you are passed in math\n"):printf("you are not passed in math\n");
c>=33?printf("you are passed in english\n"):printf("you are not passed in english\n");

return 0;
}  */
#include<stdio.h>

int main () {
int a;
int b;
int c;

printf("HEy please enter tha value of marks obtained in physics\n");
scanf("%d",&a);
printf("HEy please enter tha value of marks obtained in math\n");
scanf("%d",&b);
printf("HEy please enter tha value of marks obtained in english\n");
scanf("%d",&c);
if (a<=33 || b<=33 || c<=33){printf("you are failed due to less  marks");}
else if((a+b+c)/3 <40){printf("You are passed");}

return 0;
}