#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void replace(char *str, char old_char, char new_char) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == tolower(old_char)) {
            str[i] = new_char;
        }
    }
}

int main(){
    char line[50];
    fgets(line, sizeof(line), stdin);
    replace(line, 'a', '*');

    FILE* output = fopen("file" , "w");
    fprintf(output , "%s\n", line);
    fclose(output);

    output = fopen("file", "a"); 
    fprintf(output, "hello\n"); 
    fclose(output);

    return EXIT_SUCCESS;
}
