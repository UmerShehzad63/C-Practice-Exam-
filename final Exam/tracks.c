#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char title[41];
    int length;
    int plays;
}TRACK;

int cmp(const void* a , const void* b){
    TRACK *x = (TRACK *)a;
    TRACK *y = (TRACK *)b;

    if (x->plays != y->plays)
    {
        return y->plays - x->plays;
    }
    if (x->length != y->length)
    {
        x->length - y->length;
    }
    return strcmp(x->title , y->title);
}

int main(int argc , char *argv []){
    char line [62];
    int l = 0;
    TRACK tracks[20];
    if (argc == 1)
    {
        fprintf(stderr , "first file is missing");
        return 1;
    }
    
    FILE* input = fopen(argv[1] , "r");
    if (!input)
    {
        fprintf(stderr , "first file cannot be opened");
        return 2;
    }
    
    while (fgets(line , sizeof(line) , input))
    {
        line[strlen(line)- 1] = '\0';
        strcpy(tracks[l].title , strtok(line , ";"));
        tracks[l].length = atoi(strtok(NULL , ";"));
        tracks[l].plays = atoi(strtok(NULL , ";"));
        l ++ ;
    }
    fclose(input);

    qsort(tracks , l , sizeof(TRACK) , cmp);
    if (argc == 1)
    {
        fprintf(stderr , "second file is missing");
        return 3;
    }
    FILE* output = fopen(argv[2] , "w");
    if (!input)
    {
        fprintf(stderr , "second file cannot be opened");
        return 2;
    }
    
    for (int i = 0; i < l; i++)
    {
        fprintf(output , "%s;%d;%d\n" , tracks[i].title , tracks[i].length , tracks[i].plays);
    }
    fclose(output);

    return EXIT_SUCCESS;
}