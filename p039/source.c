#include <stdio.h>

#define BASE_PAY 10.0
#define OVER_TIME 40.0
#define OVER_TIME_RATE 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_LIMIT_1 300.0
#define TAX_LIMIT_2 450.0


int main(void)
{
    double hour, pay, tax;
    
    scanf("%lf", &hour);

    if (hour > OVER_TIME) {
        pay = OVER_TIME * BASE_PAY + (hour - OVER_TIME) * BASE_PAY * OVER_TIME_RATE;
    } else {
        pay =  hour * BASE_PAY;
    }

    if (pay > TAX_LIMIT_2) {
        tax = TAX_RATE_3 * (pay - TAX_LIMIT_2) + TAX_RATE_2 * (TAX_LIMIT_2 - TAX_LIMIT_1) + TAX_RATE_1 * TAX_LIMIT_1;
    } else if (pay > TAX_LIMIT_1) {
        tax = TAX_RATE_2 * (pay - TAX_LIMIT_1) + TAX_RATE_1 * TAX_LIMIT_1;
    } else {
        tax = TAX_RATE_1 * pay;
    }
    
    printf("%.2lf %.2lf %.2lf", pay, tax, pay-tax);
    

    return 0;
}