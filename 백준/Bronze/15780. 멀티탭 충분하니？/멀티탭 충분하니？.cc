#include <cstdio>
using namespace std;

int main() {
    int N, K, sum = 0, value;
    scanf("%d %d", &N, &K);
    for(int i=0; i<K; i++) {
        scanf("%d", &value);
        if(value%2) sum += value/2+1;
        else sum += value/2;
    }
    if(sum >= N) printf("YES");
    else printf("NO");
}
