#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int positives(int n){
    if (n > 0)
        return 1;
    return 0;
}

int count_of_positives(int *p , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (positives(p[i]))
            c += 1;
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
        int c = count_of_positives(arr , a);
        printf("%d\n" , c);
    }
    

    return EXIT_SUCCESS;
}