#include <stdio.h>
#include <stdbool.h>

int gate(int num, bool one, bool two);

int main(void)
{
	int A, B, C, count = 0;
	bool v, w, x, y, z, a, b, c, d, e;

	scanf("%d %d %d", &A, &B, &C);

	for(int i = 1; i < 5; i++) {
        v = i <= 2;
        w = i%2 == 0;

        a = gate(A, v, w);

        for(int j = 0; j < 2; j++) {
            x = j == 0;

            for(int k = 1; k < 5; k++) {
                y = k <= 2;
                z = k%2 == 0;

                b = gate(4, x, y);
                c = gate(B, y, z);
                d = gate(3, a, b);
                e = gate(C, b, c);

                if(gate(5, d, e)) count++;
            }
        }
    }

	printf("%d\n", count);

	return 0;
}

int gate(int num, bool one, bool two)
{
    switch (num) {
        case 1: return one||two;
        case 2: return one&&two;
        case 3: return !(one||two);
        case 4: return !(one&&two);
        case 5: return one^two;
    }
}