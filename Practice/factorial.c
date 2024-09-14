#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    return n == 1 ? 1 : n * factorial(n-1);
    // if (n == 0 || n == 1){
    //     return 1;
    // }
    // else {
    //     return n * factorial(n-1);
    // }
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d" , factorial(n));
    return EXIT_SUCCESS;
}