#include <stdio.h>
#include <stdlib.h>

int main() {
    char a, b, c, d ;
    float f1,f2;
    while (1)
    {
        
    for (int i = 0; i < 4; i++) {
        if (i == 0)
            scanf(" %c", &a);        
        else if (i == 1)
            scanf(" %c", &b);
        else if (i == 2)
            scanf(" %c", &c);
        else if (i == 3)
            scanf(" %c", &d);
    }
    if (a =='0'&& b == '0' && c == '0'&& d == '0'){
                break;
    }
    f1 = (float)a/(float)b;
    f2 = (float)c/(float)d;
    if (f1 > f2)
        printf(">\n");
    else if (f1 < f2)
        printf("<\n");
    else
        printf("=\n");
    }
    


    return EXIT_SUCCESS;
}
