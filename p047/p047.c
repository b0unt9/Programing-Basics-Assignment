#include <stdio.h>

int main() {
    int input, count = 0;

    scanf("%d", &input);

    while(input != 1) {
        if (input%2 == 0) input /= 2;
        else input = 3 * input + 1;
        count++;
    }
    
    printf("%d", count-=1);

    return 0;
}