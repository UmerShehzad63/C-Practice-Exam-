#include <stdio.h>
#include <stdlib.h>

int is_monotone_dec(int *p , int l){
    int c = 0;
    for (int i = 0; i <l-1 ; i++)
    {
        if (p[i] < p[i+1])
        {
            return 0;
        }
        else
            continue;
    }
    return 1;
}


int main(){
    int a , b , n;
    while ((scanf("%d" , &n)) != EOF)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d" , &a);
            arr[i] = a;
        }
        b = is_monotone_dec(arr , a);
        if (b)
            printf("True\n");
        else
            printf("False\n");
    }
    

    return EXIT_SUCCESS;
}