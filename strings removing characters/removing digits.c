#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *delte_digits(char *p , int l){
    int c = 0;
    char *arr = (char *)calloc(l+1 , sizeof(char));
    for (int i = 0; i < l; i++)
    {
        char a = p[i];
        if(!isdigit(a)){
            arr[c] = a;
            c+= 1;
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
        char *arr = delte_digits(line , strlen(line));
        puts(arr);
       }
       else
        break;
    }
    

    return EXIT_SUCCESS;
}