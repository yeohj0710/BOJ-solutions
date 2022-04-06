#include <cstdio>
using namespace std;

int main() {
    int T, N;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &N);
        if(N == 1) {
            printf("#\n\n");
            continue;
        }
        for(int j=0; j<N; j++) printf("#");
        printf("\n");
        for(int j=1; j<=N-2; j++) {
            printf("#");
            for(int k=1; k<=N-2; k++) printf("J");
            printf("#\n");
        }
        for(int j=0; j<N; j++) printf("#");
        printf("\n\n");
    }
}
