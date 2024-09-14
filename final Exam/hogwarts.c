#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[16];
    int score ;
    int wins;
}HOGWARTS;

int cmp(const void* a , const void *b){
    HOGWARTS *x = (HOGWARTS *)a;
    HOGWARTS *y = (HOGWARTS *)b;
    if (x->score != y->score)
    {
        return y->score - x->score;
    }
    if (x->wins != y->wins)
    {
        return x->wins - y->wins;
    }
    return strcmp(x->name , y->name);
}

int main(int argc , char *argv[]){
    char line[102];
    int l = 0;
    HOGWARTS hogwart[20];
    if (argc == 1)
    {
        fprintf(stderr , ("file one not found"));
        return 1;
    }
    
    FILE* input = fopen(argv[1] , "r");
    if (!input)
    {
        fprintf(stderr , ("file one cannot be opened"));
        return 2;
    }
    
    while (fgets(line , sizeof(line) ,input ))
    {
        line[strlen(line)-1] = '\0';
        strcpy(hogwart[l].name , strtok(line , ";"));
        hogwart[l].score  = atoi(strtok(NULL ,";"));
        hogwart[l].wins = atoi(strtok(NULL , ";"));
        l++;
    }
    fclose(input);

    qsort(hogwart , l , sizeof(HOGWARTS) , cmp);
    if (argc == 2)
    {
        fprintf(stderr , ("second file not found"));
        return 3;
    }
    
    FILE* output = fopen(argv[2] , "w");
    if (!input)
    {
        fprintf(stderr , ("second file cannot be opened"));
        return 4;
    }
    
    for (int i = 0; i < l; i++)
    {
        fprintf(output , ("# %d %s: %d (%d)\n") , i , hogwart[i].name , hogwart[i].score , hogwart[i].wins);
    }
    

    return EXIT_SUCCESS;
}