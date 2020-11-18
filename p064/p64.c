#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
double correction(int *data, int num, int num2);
double trimmed(int *data, int num, int num2);

int main(void) {
    int N, K;

    scanf("%d %d", &N, &K);

    int *array = (int *) calloc(N, sizeof(int));

    for (int i = 0; i < N; i++) scanf("%d", &array[i]);

    qsort(array, N, sizeof(int), compare);
    
    printf("%.1f %.1f", correction(array, N, K), trimmed(array, N, K));

    return 0;
}

int compare(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b) return -1;
    if (*(int *)a > *(int *)b) return 1;
    return 0;
}

double correction(int *data, int N, int K) {
    int start = K;
    int end = N - K;
    double result;
    
    for (; start < end; start++) {
        result += data[start];
    }

    result = result / (double) (N - 2 * K);

    return result;
}

double trimmed(int *data, int N, int K) {
    double result;

    for (int i = 0; i < K; i++) {
        data[i] = data[K];
        data[N-i-1] = data[N-K-1];
    }

    for (int i = 0; i < N; i++) {
        result += data[i];
    }

    result = result / (double) N;

    return result;
}