#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *delete_odds(char *p , int l){
    int c = 0;
    char *arr = (char *)calloc(l+1 , sizeof(char));
    for (int i = 0; i < l; i++)
    {
        char a = p[i];
        if(!isdigit){
            arr[c] = a;
            c += 1;
        }
        else {
            int num = a -'0';
            if(num % 2 == 0){
                arr[c] = a;
                c += 1;
            }
        }
    }
    arr[c] = '\0';
    return arr;
}
int main(){
    while (1)
    {
        char line[100];
        gets(line);
        if((strcmp(line , "")) == 0)
            break;
        char *arr = delete_odds(line , strlen(line));
        puts(arr);
        free(arr);
    }
    
    return EXIT_SUCCESS;
}