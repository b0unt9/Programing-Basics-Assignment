#include <stdio.h>
#include <string.h>

int main(void) {
    int key;
    char text[81] = {0,};

    scanf("%d\n", &key);
    
    fgets(text, 81, stdin);

    for (int i = 0; i < strlen(text); i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            if (text[i] - key < 65 ) text[i] += 26;
            text[i] = text[i] - key;
        }
    }

    puts(text);

    return 0;
}