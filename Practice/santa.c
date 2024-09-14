#include <stdio.h>
#include <stdlib.h>

int leap(int y){
    if ((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0))
        return 29;
    else
        return 28;
}

int main(){
    int d , y , m  , rem_days;
    scanf("%d %d %d" , &y , &m , &d);
    rem_days = 0;
    int l = leap(y);
if (m == 12) {
    if (d > 6){
        int r = d - 6;
        rem_days = 337 + l -r;}
    else
        rem_days = 6-d;}
else {
    switch (m)
    {
    case 1 :
        rem_days += 31;
    case 2 :
        rem_days += l;
    case 3:
        rem_days += 31;
    case 4 :
        rem_days += 30;
    case 5 :
        rem_days += 31;
    case 6 :
        rem_days += 30;
    case 7 :
        rem_days += 30;
    case 8 :
        rem_days += 31;
    case 9 :
        rem_days += 30;
    case 10 :
        rem_days += 31;
    case 11 :
        rem_days += 30;
    default:
        break;
    }
    rem_days = rem_days - d + 6;
}

printf("%d",rem_days);

    return EXIT_SUCCESS;
}