#include <stdio.h>
#include <stdlib.h>

int swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    return a * 100 + b; 
}

int main() {
    int a = 10;
    int b = 20;
    int s = swap(a, b);
    a = s / 100;
    b = s % 100;
    printf("%d %d\n", a, b);
    return EXIT_SUCCESS;
}
