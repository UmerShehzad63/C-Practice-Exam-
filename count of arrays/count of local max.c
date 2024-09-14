#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxi(int n){

}

int count_of_local_max(int *p , int l){
    int c = 0 ;
    for (int i = 1 ; i < l-1 ; i++){
        if (p[i] > p[i+1] && p[i] > p[i-1])
            c += 1;
        else
            continue;
    }return c;
}

int main(){
    int n   , a , b;
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &a);
        int arr[a];
        for (int j = 0; j < a; j++)
        {
           scanf("%d", &b);
           arr[j]= b;
        }
        int c = count_of_local_max(arr , a);
        printf("%d\n" , c);
    }
    

    return EXIT_SUCCESS;
}