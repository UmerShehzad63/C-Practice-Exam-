#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d ;
    float f1,f2;
    while (1)
    {
    scanf("%f %f %f %f" ,&a , &b, &c, &d);
    
    if (a ==0 && b == 0 && c == 0 && d == 0){
                break;
    }
    f1 = a/b;
    f2 = c/d;
    if (f1 > f2)
        printf(">\n");
    else if (f1 < f2)
        printf("<\n");
    else
        printf("=\n");   
}
    return EXIT_SUCCESS;
}