#include <cstdio>
using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    while(b > 0 && d > 0) {
        b -= c;
        d -= a;
    }
    if(b <= 0 && d <= 0) printf("DRAW");
    else if(b > 0 && d <= 0) printf("PLAYER A");
    else if(b <= 0 && d > 0) printf("PLAYER B");
}
