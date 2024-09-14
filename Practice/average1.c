#include <stdio.h>
#include <stdlib.h>

int main(){
    float max , a , n;
    max = 0;
    n = 0;
    while (1)
    {
         if(scanf("%f" ,&a) == EOF){
        break;
    }
        else {
            max += a;
            n += 1;
        }
    
    }
    printf("%.2f" , max/n);
    
}