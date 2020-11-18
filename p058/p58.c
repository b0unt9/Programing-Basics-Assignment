#include <stdio.h>
#include <string.h>

char stack[51];
int top = -1;

int push(char ch);
int pop();
int result(char *ch, int size);

int main(void) {
    char array[51];

    scanf("%s", array);

    if (result(array, strlen(array)) == -1) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int push(char ch) {
    if (top >= 50) return -1;
    return stack[++top] = ch;
}

int pop() {
    if (top < 0) return -1;
    return stack[top--] = '\0';
}

int result(char *ch, int size) {
    for (int i = 0; i < size; i++) {
        if (ch[i] == '(' || ch[i] == ')') {
            if (top == -1) push(ch[i]);
            else {
                if (stack[top] == '('&&ch[i] == ')') pop();
                else push(ch[i]);
            }
        }
    }
    
    return top;
}