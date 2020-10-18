#include <stdio.h>

int main(void)
{
    int class;
    double money, tier, result;

    scanf("%d %lf", &class, &money);

    switch (class) {
    case 1:
        tier = 17850;
        break;
    
    case 2:
        tier = 23900;
        break;
    
    case 3:
        tier = 29750;
        break;

    case 4:
        tier = 14875;
        break;
    
    default:
        break;
    }

    if (money < tier) {
        result = money * 0.15;
    } else {
        result = tier * 0.15 + (money - tier) * 0.28;
    }

    printf("%.2lf", result);
    
    return 0;
}