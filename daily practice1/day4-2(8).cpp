#include <stdio.h>

union my_union {
    int integer;
    float floating_point;
};

int main() {
    union my_union u;
    u.integer = 42;
    u.floating_point = 3.14;

    printf("Value of the union: %d\n", u.integer);
    printf("Value of the union: %f\n", u.floating_point);

    return 0;
}

