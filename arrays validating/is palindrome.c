#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int *p , int l){
    for (int i = 0; i < l; i++)
    {
        if (p[i] != p[l-i-1])
        {
            return 0;
        }
        else 
            continue;
    } return 1;
}

int main(){
    int a , b;
    while ((scanf("%d" , &a)) != EOF)
    {
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d" , &b);
            arr[i] = b;
        }
        int c = is_palindrome(arr , a);
        if (c)
            printf("True\n");
        else
            printf("False\n");
    }

    return EXIT_SUCCESS;
}