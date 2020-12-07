#include <stdio.h>

int main(void) {
    int N, M;

    scanf("%d %d", &N, &M);

    int array_1[N][M];
    int array_2[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array_1[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d",  &array_2[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", array_1[i][j] + array_2[i][j]);
        }
        printf("\n");
    }

    return 0;
}