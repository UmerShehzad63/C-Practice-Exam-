#include <stdio.h>
#include <stdlib.h>

int main(){
     ;
    int count = 1, p= 0 , n = 0 ,b , a;
    while (1)
    {
        scanf("%d" , &a);
        if (a == 0)
            break;
        for (int i = 0; i < a ; i++)
        {
            scanf("%d" , &b);
            if (b > 0)
                p ++;
            else if(b<0)
                 n ++;}
        if (p > n)
            printf("%d\n" , count);
        count++;
        p = n = 0;
    }
 
    return EXIT_SUCCESS;
}