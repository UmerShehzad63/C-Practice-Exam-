#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b;
    scanf("%d %d" ,&a , &b);
     while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    if (b == 1){
        printf("IGEN");
    }
    else{
        printf("NEM");
    }
    return EXIT_SUCCESS;
}