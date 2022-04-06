#include<stdio.h>
#include<string.h>

int main() {
    int N, queue[10005] = {0, }, front = 0, rear = 1, digit;
    char input[20];
    queue[front] = -1, queue[rear] = -1;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%s", input);
        if(!strcmp(input, "push")) {
            scanf("%d", &digit);
            queue[rear++] = digit;
            queue[rear] = -1;
        }
        else if(!strcmp(input, "pop")) {
            if(front+1 == rear) printf("-1\n");
            else {
                printf("%d\n", queue[front+1]);
                queue[front++] = 0;
                queue[front] = -1;
            }
        }
        else if(!strcmp(input, "size")) printf("%d\n", rear-front-1);
        else if(!strcmp(input, "empty")) printf("%d\n", front+1 == rear);
        else if(!strcmp(input, "front")) printf("%d\n", queue[front+1]);
        else if(!strcmp(input, "back")) printf("%d\n", queue[rear-1]);
    }
}
