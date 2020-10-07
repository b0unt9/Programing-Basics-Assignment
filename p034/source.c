#include <stdio.h>

int main(void)
{
    int year;
  
    double balance, interest;

    scanf("%lf %lf %d", &balance, &interest, &year);

    for (int i = 0; i < year; i++)
    {
        balance += balance * interest;
    }
	
    printf("%.5lf", balance);

    return 0;
}