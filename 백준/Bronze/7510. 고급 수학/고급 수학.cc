#include <cstdio>
using namespace std;

int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int i=1; i<=T; i++) {
        printf("Scenario #%d:\n", i);
        scanf("%d %d %d", &a, &b, &c);
        if(a*a+b*b == c*c || b*b+c*c == a*a || c*c+a*a == b*b) printf("yes\n\n");
        else printf("no\n\n");
    }
}
