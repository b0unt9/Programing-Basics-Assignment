#include <stdio.h>

int main(void) {
    int input, num, mode = 0, freq = 0;
    int array[10000] = {0,};
    
    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        scanf("%d", &num);
        array[num]++;
    }

    for (int i = 0; i < 10000; i++)
	{
		if (freq <= array[i] && mode < i) {
            freq = array[i];
            mode = i;
        }
	}

    printf("%d %d\n", mode, freq);

    return 0;
}