#include <cstdio>
#define MAX 10001
using namespace std;

int Parent[MAX];
bool Visit[MAX];

int main() {
    int T, N, A, B, U, V;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        scanf("%d", &N);
        for(int i=1; i<=N; i++) {
            Parent[i] = i;
            Visit[i] = false;
        }
        for(int i=0; i<N-1; i++) {
            scanf("%d %d", &A, &B);
            Parent[B] = A;
        }
        scanf("%d %d", &U, &V);
        Visit[U] = true;
        while(Parent[U] != U) {
            U = Parent[U];
            Visit[U] = true;
        }
        while(1) {
            if(Visit[V] == true || V == Parent[V]) break;
            else V = Parent[V];
        }
        printf("%d\n", V);
    }
}
