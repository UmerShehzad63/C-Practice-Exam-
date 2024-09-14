#include <stdio.h>
#include <stdlib.h>

int coun_of_odds(int *num , int len , int *c){
    *c = 0;
    for(int i = 0 ; i < len ; i++){
        if (num[i] % 2 != 0)
            *c += 1;
    }return *c;
}


int main(){
    int n , a ,b ;
    int c = 0;

    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &a);
        int num[a];
        for (int j = 0; j < a ; j++){
            scanf("%d" , &b);
            num[j] = b;
        }
        coun_of_odds(num , a , &c) ;
        printf("%d\n" , c);
    }

    return EXIT_SUCCESS;
}