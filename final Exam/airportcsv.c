#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[31];
    char city[31];
    int runways;
    int time;
}AIRPORT;

int cmp(const void *a, const void*b){
    AIRPORT *x = (AIRPORT *)a;
    AIRPORT *y = (AIRPORT *)b;

    if (x->runways != y->runways)
    {
        return y->runways -x->runways;
    }
    else if(x->time != y->time){
        return y->time - x->time;
    }
    return x->name - y->name;
}

int main(int argc , char *argv[]){
    char line[102];
    AIRPORT airports[21];
    int l = 0;
    if (argc == 1)
    {
        fprintf(stderr , ("The name of the file is missing"));
        return 1;
    }
    
    FILE* file = fopen(argv[1] , "r");
    if (!file)
    {
        fprintf(stderr , ("File cannot be opened"));
        return 2;
    }

    while (fgets(line , 102 , file))
    {
        line[strlen(line)-1] = '\0';
        strcpy(airports[l].name , strtok(line , ";"));
        strcpy(airports[l].city , strtok(NULL , ";"));
        airports[l].runways = atoi(strtok(NULL , ";"));
        airports[l].time = atoi(strtok(NULL , ";"));
        l ++;
    }
    fclose;

    if (argc == 2)
    {
        fprintf(stderr ,"The second name is missing");
        return 3;
    }
    
    FILE *output = fopen(argv[2] , "w");
    if (!output)
    {
        fprintf(stderr , ("Second file cannot be opened"));
        return 4;
    }
    
    qsort(airports , l , sizeof(AIRPORT) , cmp);

    for (int i = 0; i < l; i++)
    {
        fprintf(output , "%s;%s;%d;%d\n" , airports[i].name , airports[i].city , airports[i].runways, airports[i].time);
    }
    

    return EXIT_SUCCESS;
}