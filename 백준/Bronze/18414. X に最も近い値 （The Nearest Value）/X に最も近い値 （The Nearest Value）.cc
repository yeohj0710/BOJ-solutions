#include <cstdio>
using namespace std;

int Abs(int a, int b) { return a-b>=0?a-b:b-a; }

int main() {
    int X, L, R, Min, Idx;
    scanf("%d %d %d", &X, &L, &R);
    Min = Abs(X, L);
    Idx = L;
    for(int i=L+1; i<=R; i++) {
        if(Abs(X, i) < Min) {
            Min = Abs(X, i);
            Idx = i;
        }
    }
    printf("%d", Idx);
}
