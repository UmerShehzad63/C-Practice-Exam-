#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *double_digits(char *p , int l){
    int c = 0;
    char *arr = (char *)calloc(l*2 + 1 , sizeof(char));
    for (int i = 0; i <l; i++)
    {
        char a =p[i];
        if(isdigit(a)){
            arr[c] = a;
            c += 1;
            arr[c] = a;
            c += 1;
        }
        else{
            arr[c] = a;
            c += 1;
        }
    }  
    arr[c] = '\0';
    return arr;
}
int main(){
    while (1)
    {
        char line[100];
        if(gets(line)){
            char *arr = double_digits(line , strlen(line));
            puts(arr);
            free(arr);
        }
        else
            break;

    }
 
    return EXIT_SUCCESS;
}