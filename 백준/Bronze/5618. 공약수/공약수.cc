#include <cstdio>
using namespace std;

int main() {
    int N, a, b, c;
    scanf("%d", &N);
    if(N == 2) scanf("%d %d", &a, &b);
    else scanf("%d %d %d", &a, &b, &c);
    for(int i=1; i<=a; i++) {
        if(N == 2 && a%i == 0 && b%i == 0) printf("%d\n", i);
        else if(N == 3 && a%i == 0 && b%i == 0 && c%i == 0) printf("%d\n", i);
    }
}
