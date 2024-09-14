#include <stdio.h>
#include <stdlib.h>

int strictly_monotone_increasing(int *p , int l){
    for (int i = 0; i < l-1; i++)
    {
        if (p[i] > p[i+1])
            return 0;
        else if(p[i] == p[i+1])
            return 0;
    }
    return 1;
}

int main(){
    int a , b , c;
    while ((scanf("%d" , &a)) != EOF)
    {
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d" , &b);
            arr[i] = b;
        }
        c = strictly_monotone_increasing(arr , a);
        if (c)
            printf("True\n");
        else    
            printf("False\n");
    }
    

    return EXIT_SUCCESS;
}