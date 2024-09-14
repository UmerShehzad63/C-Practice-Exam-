#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int count_of_lmin(int *p , int l){
    int c = 0;
    for (int i = 1; i < l -1 ; i++)
    {
        if (p[i] < p[i-1] && p[i] < p[i+1]){
            c += 1;
        }
        else
            continue;
    }
    return c;
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
        int c = count_of_lmin(arr , a);
        printf("%d\n" , c);
    }
    
}s