
//WAP in C to make a struct and her address i mean data and her address so folllow all step of struct 
#include<stdio.h>
struct mystruct{//create struct
    int a;
    struct mystruct *b;
};
int main () {//start programme
struct mystruct x ={10,NULL},y={20,NULL},z={30,NULL};
struct mystruct *p1,*p2,*p3;
p1=&x;
p2=&y;
p3=&z;//store all

x.b=p2;
y.b=p3;
printf("Address of x : %d a: %d address of next: %d\n",p1,x.a,x.b);//these all for output
printf("Address of y : %d a: %d address of next: %d\n",p2,y.a,y.b);
printf("Address of z : %d a: %d address of next: %d\n",p3,z.a,z.b);


return 0;
}
