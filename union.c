/*#include <stdio.h>

union emp {
    int a[7];
    char b;
    float c;
    //if we write ehre double then size of double is 8 so here counting accordoing to double 
};

int main() {
    printf("THE SIZE OF UNION EMP IS :%d", sizeof(union emp));
    return 0;
}*/
#include<stdio.h>
struct mystruct{
    int a;
    struct mystruct *b;
};
int main () {
struct mystruct x ={10,NULL},y={20,NULL},z={30,NULL};
struct mystruct *p1,*p2,*p3;
p1=&x;
p2=&y;
p3=&z;

x.b=p2;
y.b=p3;
printf("Address of x : %d a: %d address of next: %d\n",p1,x.a,x.b);
printf("Address of y : %d a: %d address of next: %d\n",p2,y.a,y.b);
printf("Address of z : %d a: %d address of next: %d\n",p3,z.a,z.b);


return 0;
}
