#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a , b , n = 2;
    a = 1;
    scanf("%d" , &b);
    while (n < sqrt(b)+1)
    {
       if (a == 0){
        break;
       }
       n += 1;
       if ((float)(b/n) == ((float)b/(float)n)){
            a = 0;
       }
       else{
            a = 1;
       }
    
    }
    if (a == 0){
        printf("NEM");
    }
    else
        printf("IGEN");
    return EXIT_SUCCESS;
}