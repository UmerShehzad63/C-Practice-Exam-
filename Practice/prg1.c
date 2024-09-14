#include <stdio.h>
#include <stdlib.h>

int main(){
    float a , b , c , d , x ,y; 
    
    while (1)
    {
       scanf("%f %f %f %f" , &a , &b , &c , &d);
       if (a == 0 && b == 0 && c == 0 && d == 0){
            break;
       }
        else{
             x = a/b;
             y = c/d;
            if (x < y)
            {
                printf("<\n");
            }
            else if(x > y)
            {
                printf(">\n");
            }
            else 
            {
                printf("=\n");
            }
        }

           

    }
   return EXIT_SUCCESS ;
}