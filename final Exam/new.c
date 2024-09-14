#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct 
{
    char id[11];
    char name[21];
    float grade;
}STUDENT;

int cmp(const void*a , const void*b){
    STUDENT *x = (STUDENT *)a;
    STUDENT *y = (STUDENT *)b;

    if (x->grade != y->grade)
    {
        return y->grade - x->grade;
    }
    if (strcmp(x->name , y->name) != 0)
    {
        return strcmp(x->name , y->name);
    }
     return strcmp(x->id , y->id);
}

int query(STUDENT students[] , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (students[i].grade > 75)
        {
            c ++;
        }
        
    }
    return c;
}

int query2(STUDENT students[] , int l){
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (strlen(students[i].name) > 5)
            {
                c ++;
            }  
    }
    
    return c;
}

int main(int argc , char*argv[]){
    char line[52];
    STUDENT students[30];
    int l = 0;
    FILE* input = fopen(argv[1] , "r");
    while (fgets(line , 52 , input))
    {
        line[strlen(line)-1] = '\0';
        strcpy(students[l].id , strtok(line , ";"));
        strcpy(students[l].name , strtok(NULL , ";"));
        students[l].grade = atof(strtok(NULL , ";"));
        l++;
    }
    int s_grade = query(students , l);
    printf("%d\n" , s_grade);
    int s_no_ofs = query2(students , l);
    printf("%d\n" , s_no_ofs);
    fclose(input);

    qsort(students , l , sizeof(STUDENT) , cmp);
    FILE* output = fopen(argv[2] , "w");
    for (int i = 0; i < l; i++)
    {
        fprintf(output , "%s;%s;%.1f\n" , students[i].id , students[i].name , students[i].grade);
    }
    fclose(output);
    

    return EXIT_SUCCESS;
}