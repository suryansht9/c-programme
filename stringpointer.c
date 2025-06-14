#include<stdio.h>
#include<string.h>
int main () {
char name[]="harry potter";
printf("%c \n",*name);
printf("%c \n",*(name+1));
printf("%c \n",*(name+7));
return 0;
}