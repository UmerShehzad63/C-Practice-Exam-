#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int odds(int n){
    if (n == 1 )
        return 1;
    else if (n%2 == 0){
            return 0;
    }
    return 1;
}
int count_of_odds(int *p , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if(odds(p[i])){
            c += 1;
        }
    }return c; 
}
int main(){
    int a , n  , b;
    scanf("%d" , &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d" , &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &b);
            arr[j] = b;
        }
        int c = count_of_odds(arr , n);
        printf("%d\n" , c);
    }
    
   

    return EXIT_SUCCESS;
}



