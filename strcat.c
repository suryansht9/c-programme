//WAP TO TAkE INPUT OF 2 STRINGS and concatenate using strcat
/*#include<stdio.h>
#include<string.h>
int main () {
    char str1[100],str2[100];
    printf("Please Enter the str1: \n ");
    scanf("%s",str1);
    printf("Please Enter the str2: \n");
    scanf("%s",str2); 
    strcat(str1 , str2);
    printf("After applying strcat : %s",str1);
return 0;
}*/

////WAP TO TAkE INPUT OF 2 STRINGS and concatenate without using concatenate
#include<stdio.h>
#include<string.h>

int main () {
int i;
 char str1[100]="Ramesh",str2[70]="Singh";
int j=strlen(str1);
for (i=0;str2[i]!='\0';i++)
{
    str1[j]=str2[i];
    j=j+1;
}
printf("%s",str1);
}