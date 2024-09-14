#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char code[6];
    char name[51];
    char theme[31];
    int bricks;
}LEGO_SET;

int cmp(const void* a , const void* b){
    LEGO_SET *x = (LEGO_SET *)a;
    LEGO_SET *y = (LEGO_SET *)b;
    if (x->bricks != y->bricks)
    {
        return y->bricks - x->bricks;
    }
    if (strcmp(x->theme , y->theme) != 0)
    {
        return strcmp(x->theme , y->theme);
    }
    if (strcmp(x->name , y->name) != 0)
    {
        return strcmp(x->name , y->name);
    }
   
    return strcmp(x->code , y->code);
}

int main(int argc , char *argv[]){
    char line[102];
    LEGO_SET legos[20];
    int l = 0;
    if (argc == 1)
    {
        fprintf(stderr , ("first file name missing"));
        return 1;
    }
    
    FILE* input = fopen(argv[1] , "r");
    if (!input)
    {
        fprintf(stderr , ("file one cannot be opened"));
        return 2;
    }
    
    while (fgets(line , 102 , input))
    {
        line[strlen(line) -1] = '\0';
        strcpy(legos[l].code , strtok(line , ";"));
        strcpy(legos[l].name , strtok(NULL , ";"));
        strcpy(legos[l].theme , strtok(NULL , ";"));
        legos[l].bricks = atoi(strtok(NULL , ";"));
        l ++ ;
    }
    fclose(input);

    qsort(legos , l , sizeof(LEGO_SET) , cmp);
    if (argc == 2 )
    {
        fprintf(stderr , ("second file name missing"));
        return 3;
    }

    FILE* output = fopen(argv[2] , "w");
    if(!output){
        fprintf(stderr , ("file two cannot be opened"));
        return 4;
    }
    for (int i = 0; i < l; i++)
    {
        fprintf(output , ("%s (%s) :%d - %s;\n"),  legos[i].name , legos[i].code  , legos[i].bricks ,legos[i].theme);
    }
    fclose(output);

    return EXIT_SUCCESS;
}