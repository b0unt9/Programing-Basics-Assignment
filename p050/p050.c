#include <stdio.h>

void fun(double *i, double *j, double *k);

int main(void)
{
	double i, j, k;
	
	while (scanf("%lf %lf %lf", &i, &j, &k) == 3)
	{
		fun(&i, &j, &k);
		printf("%.6lf %.6lf %.6lf\n", i, j, k);
	}

	return 0;

}

void fun(double *i, double *j, double *k)
{
    double temp;

    if (*i > *j) {
        temp = *j;
		*j = *i;
		*i = temp;
    }

    if (*j > *k) {
		temp = *k;
		*k = *j;
		*j = temp;

		if (*i > *j) { 
            temp = *j;
			*j = *i;
			*i = temp;
        }
	}
}