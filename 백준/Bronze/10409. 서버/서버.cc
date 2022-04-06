#include <cstdio>
using namespace std;

int main() {
    int i, N, Value, Time, Sum = 0;
    scanf("%d %d", &N, &Time);
    for(i=1; i<=N; i++) {
        scanf("%d", &Value);
        Sum += Value;
        if(Sum > Time) break;
    }
    printf("%d", --i);
}
