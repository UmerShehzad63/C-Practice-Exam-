#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *delete_space(char *p ,int l){
    int c = 0;
    char *arr = (char *)calloc(l+1 , sizeof(char));
    for (int i = 0; i < l; i++)
    {
        char a = p[i];
        if(!isspace(a)){
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
        if((strcmp(gets(line) , "")) == 0)
            break;
        char *arr = delete_space(line , strlen(line));
        puts(arr);
        free(arr);
    }
    

    return EXIT_SUCCESS;
}