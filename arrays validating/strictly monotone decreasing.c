#include <stdio.h>
#include <stdlib.h>

int is_strictly_monotone_decreasing(int *p , int l){
    for (int i = 0; i < l-1; i++)
    {
        if(p[i] < p[i+1])
            return 0;
        else if(p[i] == p[i+1])
            return 0;
    }
    return 1;
}

int main(){
    int a , b , c , d;
    scanf("%d" , &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d" , &b);
        int arr[b];
        for (int j = 0; j < b; j++)
        {
            scanf("%d" , &c);
            arr[j] = c;
        }
        d = is_strictly_monotone_decreasing(arr , b);
        if(d)
            printf("True\n");
        else
            printf("False\n");
    }
    
    return EXIT_SUCCESS;
}