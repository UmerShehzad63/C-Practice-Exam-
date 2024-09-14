#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_array(int *numbers ,int len , int min , int max){
    for (int i = 0 ; i < len ; i ++){
        numbers[i] = rand() % (max - min) + min;
    }
}
void print_array(int *numbers , int len){
    for (int i = 0 ;i < len ; i++)
        printf("%d " , numbers[i]);
    printf("\n");
}
void sort_array(int *numbers , int len){
    int change = 1;
    while (change)
    {
        change = 0;
        for (int i = 1 ; i < len ; i++){
            if (numbers[i-1] > numbers[i]){
                int temp = numbers[i];
                numbers[i] = numbers[i-1];
                numbers[i-1] = temp;
                change = 1;
            }
        }
    }
    
};
void sort1_array(int *numbers , int len){
    int change = 1;
    while (change)
    {
        change = 0;
        for (int i = 1; i <len ; i ++){
            if (numbers[i-1] < numbers[i]){
                int temp = numbers[i];
                numbers[i] = numbers[i-1];
                numbers[i-1] = temp;
                change = 1;
            }
        }
    }
    
}


int main(){
    srand(time(NULL));
    int len , min , max;
    scanf("%d %d %d" , &len, &min , &max);
    int numbers[len];
    random_array(numbers , len , min , max);
    print_array(numbers , len);
    sort_array(numbers , len);
    print_array(numbers ,len);
    sort1_array(numbers , len);
    print_array(numbers , len);


    return EXIT_SUCCESS;
}