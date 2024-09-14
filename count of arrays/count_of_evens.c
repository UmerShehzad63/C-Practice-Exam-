#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int evens(int n){
    if (n % 2 == 0){
        return 1;
    }else return 0;
}


int count_of_evens(int *p , int l){
    int count = 0;
    for(int i = 0; i <l ; i ++){
        if (evens(p[i]))
            count += 1;
    }return count;
}


int main(){
    int  b , c;
    while ((scanf("%d" , &b)) != EOF)
    {
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d" , &c);
            arr[i] = c;
        }
        int d = count_of_evens(arr , b);
        printf("%d\n" ,d);
}       
    
    return EXIT_SUCCESS;
}