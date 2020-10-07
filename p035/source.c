#include <stdio.h>

int main(void)
{
    double balance, withdrawal;
    float interest;
    int year = 0;

    scanf("%lf %f %lf", &balance, &interest, &withdrawal);

    interest /= 100.0;

    if (balance*interest < withdrawal)
    {
        while (balance > 0)
        {
            balance += balance*interest;
            balance -= withdrawal;
            year++;
        }
        printf("%d", year);
        
    } else {
        printf("NO");
    }
    
    return 0;
}