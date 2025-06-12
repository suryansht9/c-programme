//WAP TO COPY THE DATA OF a STRING TO ANOTHER STRING AND ALSO TAKE STRING AS INPUT
#include<stdio.h>
#include<string.h>
int main () {
int i;
char str1[50],str2[60];
printf("Please Enter the string:\n");
scanf("%s",str1);

for (i=0;str1[i]!='\0';i++)
{
    str2[i]=str1[i];
}
str2[i]='\0';
printf(" The copied value from str1 is :%s",str2);
return 0;
}