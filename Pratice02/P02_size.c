#include <stdio.h>

int main() {
    int x = 3;
    size_t size = sizeof(x); // get varaiable x size
    printf("Size of x: %zu bytes\n", size);

    double y = 1.732;
    size = sizeof(y); // get varaiable y size
    printf("Size of y: %zu bytes\n", size);

    return 0;
}
