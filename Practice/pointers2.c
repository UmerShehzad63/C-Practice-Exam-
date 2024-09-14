#include <stdio.h>
#include <stdlib.h>

void array(int *numbers  , int l){
    printf("%d\n", numbers[1]);
    for (int i = 0 ; i < l; i++){
         printf("%d %p %d\n" , numbers[i] , &numbers[i] , numbers + i);
}}

int main(){
//     int numbers[5] = {0 , 1 , 2 ,3 , 4};
//     printf("%d %d\n", sizeof(numbers), sizeof(numbers[0]));

//     array(numbers , 5);
    //     int numbers3[40] = {0};
    // for (int i = 0; i < 40; i++)
    // {
    //     printf("%d %p\n", numbers3[i], &numbers3[i]);
    // }
    // printf("%d\n", sizeof(numbers3));

    int numbers[5] = {0, 1, 2, 3, 4};
    int *element = &numbers[0];
    printf("%p %d\n", element , numbers[0]);
    element++;
    printf("%p %d\n", element , &numbers[1]);
    element++;
    printf("%p %p\n", element , &numbers[2]);















}