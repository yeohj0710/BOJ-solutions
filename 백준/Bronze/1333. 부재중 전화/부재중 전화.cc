#include<stdio.h>

int main() {
    int N, L, D, song, bell;
    scanf("%d %d %d", &N, &L, &D);
    for(int i=0; i<(L+5)*N; i++) {
        if(i%(L+5) == 0) song = 1;
        else if(i%(L+5) == L) song = 0;
        if(i%D == 0) bell = 1;
        else if(i%D == 1) bell = 0;
        if(song == 0 && bell == 1) {
            printf("%d", i);
            return 0;
        }
    }
    for(int i=(L+5)*N; ; i++) {
        if(i%D == 0) {
            printf("%d", i);
            return 0;
        }
    }
}
