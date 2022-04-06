#include <cstdio>
using namespace std;

int main() {
    int a, b, c;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(!a && !b && !c) break;
        else if(a-b == b-c) printf("AP %d\n", c + (c-b));
        else printf("GP %d\n", c * (c/b));
    }
}
