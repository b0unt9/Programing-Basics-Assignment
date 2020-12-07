#include <stdio.h>

int main(void) {
    int N, M, P;

    scanf("%d %d %d", &N, &M, &P);

    int array_1[N][M];
    int array_2[M][P];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array_1[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &array_2[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            int value = 0;
            for (int k = 0; k < M; k++) {
                value += array_1[i][k] * array_2[k][j];
            }
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}