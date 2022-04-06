#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int N, K, time[105], sum = 0;
    char c[105];
    scanf("%d %d", &K, &N);
    for(int i=0; i<N; i++) scanf("%d %c", &time[i], &c[i]);
    for(int i=0; i<N; i++) {
        sum += time[i];
        if(sum >= 210) break;
        else if(c[i] == 'T') {
            if(K != 8) K++;
            else K = 1;
        }
        else if(c[i] == 'N' || c[i] == 'P') continue;
    }
    printf("%d", K);
}
