#include <stdio.h>
#include <stdlib.h>

int main(){
    char c ;
    int bol = 0;
    while (scanf("%s" , &c) != EOF)
    {
        if (c != '"')
            printf("%c" , c);
        else if(bol == 0){
            printf("``");
            bol = 1;     
        }
        else{
            printf("''");
            bol = 0;
        }           
    }
    
    return EXIT_SUCCESS;
}