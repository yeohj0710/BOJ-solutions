#include<stdio.h>

int main() {
    int N, state = 0, isVPS;
    char c;
    scanf("%d\n", &N);
    for(int i=0; i<N; i++) {
        state = 0;
        isVPS = 1;
        while(1) {
            scanf("%c", &c);
            if(c == '\n') break;
            if(c == '(') state++;
            else if(c == ')') state--;
            if(state < 0) isVPS = 0;
        }
        if(state) isVPS = 0;
        if(isVPS) printf("YES\n");
        else printf("NO\n");
    }
}
