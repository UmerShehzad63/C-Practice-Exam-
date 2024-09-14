#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b , x , y;
    while (1)
    {
        if(scanf("%d %d" , &a , &b)== EOF)
            {
                break;
            }
    /*x + y = a;
    2x+ 4y = b;
    x + 2y = b/2;
    y = b/2-a
    */
        else{
                 y = (b/2)-a;
                 x = a - y;
                 printf("%d %d\n",x , y);
        }
  
    }
    return EXIT_SUCCESS;
}