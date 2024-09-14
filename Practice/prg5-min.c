#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , min ;
 
    scanf("%d", &a);
    min = a;
    while (1)
    {
        if (scanf("%d", &a) == EOF){
        break;
        
    }
        else if (a < min)
            min = a;
            
    }
    printf("%d" , min);
    return EXIT_SUCCESS;
    
}