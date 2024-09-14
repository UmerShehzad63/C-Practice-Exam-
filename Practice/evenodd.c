#include <stdio.h>
#include <stdlib.h>

int main(){
    while (1)
    {
        int a;
        printf("To quit press 0\n");
        scanf("%d" , &a);
        if (a == 0)
            break;
        else if(a % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");

    }
    
    return EXIT_SUCCESS;
}