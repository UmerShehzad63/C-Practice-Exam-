#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ;
    scanf("%d" , &a);
    
    if (a >= 80)
        printf("excellent");
    else if(a >= 70)
        printf("good");
    else if(a >= 60)
        printf("satisfactory");
    else if(a >= 50)
        printf("pass");
    else if(a < 50)
        printf("fail");
    return EXIT_SUCCESS;
}