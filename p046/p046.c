#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, discriminant, duplicate, x1, x2;
	
	while (scanf("%f %f %f", &a, &b, &c) == 3)
	{
        discriminant = pow(b, 2) - 4.0 * a * c;

        if (discriminant < 0) printf("Imaginary root\n");
        else if (discriminant == 0) {
            duplicate = -b / (2.0 * a);
            printf("%.3f\n", duplicate);
        } else {
            x1 = (-b + sqrt(discriminant)) / (2.0 * a);
            x2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("%.3f %.3f\n", x1, x2);
        }
	}
		
	return 0;
}