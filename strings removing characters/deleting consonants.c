#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *delete_consonants(char *p , int l){
    char *arr = (char *)calloc(l+1 , sizeof(char));
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        char a = p[i];
        if(strchr("aeiouAEIOU" , a) || !isalpha(a) ){
            arr[c] = a;
            c += 1;
        }
    }
    arr[c]= '\0';
    return arr;
}
int main(){
    int n ;
    scanf("%d" , &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char line[100];
        gets(line);
        char *arr = delete_consonants(line , strlen(line));
        puts(arr);
        free(arr);
    }
    
    return EXIT_SUCCESS;
}