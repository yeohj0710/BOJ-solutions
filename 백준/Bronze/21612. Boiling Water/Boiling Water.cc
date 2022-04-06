#include <cstdio>
using namespace std;

int main() {
    int B, Ans;
    scanf("%d", &B);
    Ans = 5*B-400;
    printf("%d\n", Ans);
    if(Ans > 100) printf("-1");
    else if(Ans < 100) printf("1");
    else printf("0");
}
