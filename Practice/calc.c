#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b ; char op;
    while (1)
    {
        printf("To quit pres 0\n");
        if(scanf("%d %c %d" , &a , &op , &b)==0) 
   
            break;
        
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        default:
            printf("%d\n", a % b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        case '*':
            printf("%d\n", a * b);

    }}
    return EXIT_SUCCESS;
}