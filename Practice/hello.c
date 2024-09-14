#include <stdio.h>
#include <stdlib.h>




#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 31;
    c = b = a;
    printf("%d\n", c);  // Output will be 0
    return 0;
}
