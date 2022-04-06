#include <cstdio>
using namespace std;

int main() {
    int N, M, max1 = 0, max2 = 0, value;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) {
        scanf("%d", &value);
        if(value > max1) max1 = value;
    }
    for(int i=0; i<M; i++) {
        scanf("%d", &value);
        if(value > max2) max2 = value;
    }
    printf("%d", max1+max2);
}
