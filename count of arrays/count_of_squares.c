#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int square(int n){
    int a = sqrt(n);
    float b = sqrt(n);
    if (a == ceil(b)){
        return 1;
    }return 0;
}

int count_of_squares(int *p , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (square(p[i])){
            c += 1;
        }
    }
    return c;
}

int main(){
    int a , b , c;
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
        int count = count_of_squares(arr , b);
        printf("%d\n" , count);   
    }
    return EXIT_SUCCESS;
}