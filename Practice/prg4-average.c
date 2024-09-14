#include <stdio.h>
#include <stdlib.h>

int main(){
    float a , n , sum;
    sum = 0;
    scanf("%f", &n);
    for (int i = 0 ; i < n ; i++){
        scanf("%f" , &a);
        sum += a;
    }
    printf("%.2f", sum/n);
    return EXIT_SUCCESS;

}