#include <stdio.h>

typedef struct {
    int x;
    double y;
} structuraMea;

int mod(int a) {
    a = 1000;
}
int mod_addr(int *a) {
    *a = 1000;
}

int main() {
    // int x;
    // scanf("%d", &x);
    // printf("x = %d", x);

    structuraMea test, test2;
    test.x = 7;
    test.y = 9.8;
    printf("x = %d, y = %f\n", test.x, test.y);

    int a = 9;
    printf("a = %d\n", a);
    mod(a);
    printf("a = %d\n", a);
    mod_addr(&a);
    printf("a = %d\n", a);
    return 0;
}
