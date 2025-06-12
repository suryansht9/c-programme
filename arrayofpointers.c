#include<stdio.h>
#include<string.h>
int main () {
char * arr[4]={"c++","python","c","R",};
int n =sizeof(arr)/sizeof(arr[0]);
printf("array elements: \n");
for (int i=0;i,n;i++)

{
    printf("%s\n",(arr[i]));
}
return 0;
}