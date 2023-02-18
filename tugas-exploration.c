#include <stdio.h>

int main (){
    int x, y, result;

    x = 13;
    y = 17;

    printf("============================= OPERASI BITWISE BAHASA PEMOGRAMAN C =============================\n");
    
    result = x & y;
    printf("x & y = %i \n", result);

    result = x | y;
    printf("x | y = %i \n", result);

    result = x ^ y;
    printf("x ^ y = %i \n", result);

    result = ~x;
    printf("~x = %i \n", result);

    result = x << 2;
    printf("x << 2 = %i \n", result);

    result = x >> 2;
    printf("x >> y = %i \n", result);
    return 0;
    }