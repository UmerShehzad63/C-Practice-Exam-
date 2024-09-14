#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *removing_even(char *p , int l){
    int c = 0;
    char *arr = (char *)calloc(l+1 , sizeof(char));
    for (int i = 0; i < l; i++)
    {
        char a = p[i];
        if(!isdigit(a)){
            arr[c] = a;
            c += 1;
        }
        else {
            int num = a - '0';
            if (num % 2 != 0){
                arr[c] = a;
                c += 1;}
        }
    }
    arr[c] = '\0';
    return arr;
}
int main(){
    int n;
    scanf("%d" , &n);
    getchar();
    for (int i = 0; i < n ;i++)
    {
        char arr[100];
        gets(arr);
        char *line = removing_even(arr , strlen(arr));
        puts(line);
        free(line);
    }
    

    return EXIT_SUCCESS;
}