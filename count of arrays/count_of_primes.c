#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n){
     if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return 0;
        }    
    }return 1; 
}

int count_of_prime(int *p , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (prime(p[i]))
        {
            c += 1;
        }
        
    }return c;
    
}

int main(){
    int a , b;
    while (1)
    {
        scanf("%d" , &a);
        if (a == 0)
            break;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d" , &b);
            arr[i] = b;
        }
        int c = count_of_prime(arr , a);
        printf("%d\n" , c);
    }
    

    return EXIT_SUCCESS;
}