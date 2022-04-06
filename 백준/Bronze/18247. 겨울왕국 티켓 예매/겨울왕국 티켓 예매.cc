#include <cstdio>
using namespace std;

int main() {
    int T, N, M;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &N, &M);
        if(N < 12 || M < 4) printf("-1\n");
        else printf("%d\n", M*11 + 4);
    }
}
