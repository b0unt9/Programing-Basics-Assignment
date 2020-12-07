#include <stdio.h>

struct Point {
    long long x, y;
} Array[10000];

int main(void) {
    int times, x, y;
    long long far = 0;
    
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        scanf("%lld %lld", &Array[i].x, &Array[i].y);
    }

    for(int i = 0; i < times; i++) {
        for(int j = 0 ; j < times; j++) {
            far = abs(Array[j].x - Array[i].x) + abs(Array[j].y - Array[i].y) > far ? abs(Array[j].x - Array[i].x) + abs(Array[j].y - Array[i].y) : far;
        }
    }

    printf("%d", far);

    return 0;
}