#include <stdio.h>

struct Car {
    int weight, time, onbridge;
} car[1000];

int main(void) {
    int num, bridge_len, weight_limit;
    int bridge_count = 0, bridge_weight = 0;
    scanf("%d %d %d", &num, &bridge_len, &weight_limit);
    for (int i = 0; i < num; i++) {
        scanf("%d", &car[i].weight);
    }

    int i = 0, time = 0, end = 0;

    while (1) {
        for (int j = 0; j < num; j++) {
            if (car[j].onbridge) {
                car[j].time++;
                if (car[j].time >= bridge_len) {
                    if (j == num - 1) {
                        time++;
                        end = 1;
                        break;
                    }
                    bridge_count--;
                    bridge_weight = bridge_weight - car[j].weight;
                    car[j].onbridge = 0;
                }
            }
        }

        if (end) break;

        if (car[i].weight <= weight_limit - bridge_weight && bridge_count < bridge_len) {
            car[i].onbridge = 1;
            bridge_weight = bridge_weight + car[i].weight;
            bridge_count++;
            i++;
        }

        time++;
    }

    printf("%d", time);

    return 0;
}