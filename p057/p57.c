#include <stdio.h>

int happy(int n);

int main(void)
{
    int input, a, b;

    scanf("%d", &input);
    
    a = input;

    while(a > 0) {
        a = happy(a);
        b = a / 10;

        if(a == 1) {
            printf("HAPPY\n");
            break;
        } else if (b == 0) {
            printf("UNHAPPY\n");
            break;
        }
    }
    
    return 0;
}

int happy(int n) {
    int temp, result = 0;

    while(n > 0) {
        temp = n % 10;
        result = result + temp * temp;
        n /= 10;
    }

    return result;
}