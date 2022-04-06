#include <cstdio>
using namespace std;

int main() {
    int N, a, b, cnt1 = 0, cnt2 = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d %d", &a, &b);
        if(a > b) cnt1++;
        else if(a < b) cnt2++;
    }
    printf("%d %d", cnt1, cnt2);
}
