#include <cstdio>
using namespace std;

int main() {
    int a, b;
    while(1) {
        scanf("%d %d", &a, &b);
        if(!a && !b) break;
        else printf("%d %d / %d\n", a/b, a%b, b);
    }
}
