#include <cstdio>
using namespace std;

int main() {
    int N, W, H, L, Ans;
    scanf("%d %d %d %d", &N, &W, &H, &L);
    Ans = (W/L) * (H/L);
    if(N >= Ans) printf("%d", Ans);
    else printf("%d", N);
}
