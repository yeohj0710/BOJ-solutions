#include <cstdio>
using namespace std;

int main() {
    int T, a, b;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &a, &b);
        if(a%b == 0) printf("%d\n", a/b);
        else printf("%d\n", a/b+1);
    }
}
