#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    scanf("%d" , &a);
    for(int i = 1 ; i<a+1 ;i++)
        printf("%d\n" , i);
    scanf("done");
    return EXIT_SUCCESS;
}