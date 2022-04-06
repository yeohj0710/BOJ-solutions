#include<stdio.h>
#include<string.h>

int main() {
    int N, digit, stack[10001] = {0, }, top = 0;
    char input[20];
    stack[top] = -1;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%s", input);
        if(!strcmp(input, "push")) {
            scanf("%d", &digit);
            stack[top] = digit;
            stack[++top] = -1;
        }
        else if(!strcmp(input, "pop")) {
            if(!top) printf("-1\n");
            else {
                stack[top] = 0;
                printf("%d\n", stack[--top]);
                stack[top] = -1;
            }
        }
        else if(!strcmp(input, "size")) printf("%d\n", top);
        else if(!strcmp(input, "empty")) printf("%d\n", !top);
        else if(!strcmp(input, "top")) {
            if(!top) printf("-1\n");
            else printf("%d\n", stack[top-1]);
        }
    }
}
