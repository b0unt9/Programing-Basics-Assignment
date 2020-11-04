#include <stdio.h>

void to_base_n(unsigned long long num, int base);

int main(void) {
	unsigned long long num;
    int base;

	scanf("%llu %d", &num, &base);
    to_base_n(num, base);
    putchar('\n');

	return 0;
}

void to_base_n(unsigned long long num, int base)
{
	if (num == 0) return;

	to_base_n(num / base, base);
	printf("%d", num % base);

	return;
}