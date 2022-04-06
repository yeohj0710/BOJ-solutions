#include <cstdio>
using namespace std;

int main() {
    int N, M, K, Count = 0;
    scanf("%d %d %d", &N, &M, &K);
    while(N+M >= K && N >= 0 && M >= 0) {
        N -= 2;
        M -= 1;
        Count++;
    }
    printf("%d", Count-1);
}
