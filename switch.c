#include<stdio.h> 

int main () {
int a;
printf("hey please enter the value of a :\n");
scanf("%d",&a);
switch(a){
    case 1:
    printf("you entered 1\n");
    break;
    
    case 2:
    printf("you entered 2\n");
    break;

    case 3:
    printf("you entered 3\n");
    break;

    case 4:
    printf("you entered 4\n");
    break;

    case 5:
    printf("you entered 5\n");
    break;
    default:
    printf("your entered value is diffrent from our given case");
    break;

}
return 0;
}