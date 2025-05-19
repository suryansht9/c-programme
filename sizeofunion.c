#include <stdio.h>

union emp {
    int a[7];
    char b;
    float c;
    
};

int main() {
    printf("THE SIZE OF UNION EMP IS :%d", sizeof(union emp));
    return 0;
}
