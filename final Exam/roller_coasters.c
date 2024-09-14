#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[31];
    char world[31];
    int height;
    int time;
}ROLLER_COASTERS;

int cmp(const void *a , const void *b){
    ROLLER_COASTERS *x = (ROLLER_COASTERS *)a;
    ROLLER_COASTERS *y = (ROLLER_COASTERS *)b;
    if (x->time != y->time)
    {
        return x->time - y->time;
    }
    
    else if (x->height != y->height)
    {
       return y->height - x->height;
    }
    return strcmp(y->name , x->name);
}

int main(int argc , char *argv[]){
    if (argc == 1)
    {
        fprintf(stderr , "First file name is missing");
        return 1;
    }
    FILE* input = fopen(argv[1] , "r");
    if (!input)
    {
        fprintf(stderr , "First file cannot be opened");
        return 2;
    }
    char line[102];
    ROLLER_COASTERS rollers[20];
    int l = 0;
    while (fgets(line , 102 , input))
    {
        line[strlen(line) - 1] = '\0';
        if (strcmp(line , "END") == 0)
        {
            break;
        }
        strcpy(rollers[l].name , strtok(line , ";"));
        strcpy(rollers[l].world , strtok(NULL , ";"));
        rollers[l].height = atoi(strtok(NULL , ";"));
        rollers[l].time = atoi(strtok(NULL , ";"));
        l++ ;
    }
    fclose(input);
    qsort(rollers , l , sizeof(ROLLER_COASTERS) , cmp);
    
    if (argc == 2)
    {
        fprintf(stderr , ("second file name is missing"));
        return 3;
    }
    FILE* output =  fopen(argv[2] , "w");
    if (!output)
    {
        fprintf(stderr , ("second file is missing"));
        return 4;
    }
    
    for (int i = 0; i < l; i++)
    {
        fprintf(output , ("%s;%s;%d;%d\n") , rollers[i].name, rollers[i].world,rollers[i].height,rollers[i].time);
    }
    fclose(output);

    return EXIT_SUCCESS;
}

