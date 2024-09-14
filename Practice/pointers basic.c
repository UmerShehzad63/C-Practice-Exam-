#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int a = 10 ;
//     int *pA = &a;
//     int **ppA = &pA;
//     int ***pppA= &ppA;
//     printf("%d\n" , a);
//     printf("%d\n" , pA);
//     printf("%d\n" , *pA);
//     printf("%d\n" , &a);
//     printf("%d\n" , ppA);
//     printf("%d\n" , pppA);

//     return EXIT_SUCCESS;
// }

// void area (int x , int y , int*r){
//     *r = x * y;
// }
// void circle(int x , int*r){
//     *r = 2 * 3.14 * x;
// }

// int main(){
//     int rx , ry , rr , cr;
//     scanf("%d %d" , &rx , &ry);
//     area(rx , ry , &rr);
//     printf("area is ry :%d\n" , rr);
//     circle(rx , &cr);
//     printf("circle x is : %d" , cr);

//     return EXIT_SUCCESS;
// }

void swap(int *x , int *y  ){
    int temp = *x;
    *x = *y;
    *y= temp;
}
int main(){
    int x , y ,z;
    x = 10 ; 
    y = 20;
    printf("%d %d\n" , x , y);
    swap(&x , &y  );
    printf("%d %d\n" , x , y);
    
    
    return EXIT_SUCCESS;
}