#include <stdio.h>
#include <stdlib.h>

int has_matching_parity(int *p , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (i != p[i])
            return 0;
    }return 1;
}

int main(){
    int a  , b ,c;
    scanf("%d" , &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        int arr[b];
        for (int j= 0; j < b; j++)
        {
            scanf("%d" , &c);
            arr[j] = c;
        }  
        int d = has_matching_parity(arr , b);
        if (d == 0)
            printf("False\n");
        else
            printf("True\n");
    }
    
    return EXIT_SUCCESS;
}