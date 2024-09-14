#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , max , n;
    scanf("%d", &n);
    scanf("%d", &a);
    max = a;
    for (int i = 1; i < n; i ++) {
        scanf("%d", &a);
        if (a > max){
            max = a;
        }
    }   
    printf("%d" , max);
    return EXIT_SUCCESS;
    
}