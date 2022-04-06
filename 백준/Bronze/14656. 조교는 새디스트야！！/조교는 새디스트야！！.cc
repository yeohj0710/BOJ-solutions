#include <cstdio>
using namespace std;

int main() {
    int n, value, cnt = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &value);
        if(value != i) cnt++;
    }
    printf("%d", cnt);
}
