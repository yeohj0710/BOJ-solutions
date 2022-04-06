#include<stdio.h>

int N, K, num[100005] = {0, }, queue[100005] = {0, };

int BFS(int pos) {
    int front = 0, rear = 1, pop;
    queue[front] = pos;
    while(front < rear) {
        pop = queue[front++];
        if(pop+1<=100000 && !num[pop+1] && pos!=pop+1) {
            num[pop+1] = num[pop]+1;
            queue[rear++] = pop+1;
            if(pop+1 == K) break;
        }
        if(pop-1>=0 && !num[pop-1] && pos!=pop-1) {
            num[pop-1] = num[pop]+1;
            queue[rear++] = pop-1;
            if(pop-1 == K) break;
        }
        if(pop*2<=100000 && !num[pop*2] && pos!=pop*2) {
            num[pop*2] = num[pop]+1;
            queue[rear++] = pop*2;
            if(pop*2 == K) break;
        }
    }
    return num[K];
}

int main() {
    scanf("%d %d", &N, &K);
    printf("%d", BFS(N));
}
