#include <cstdio>
using namespace std;

int main() {
    int T, n, m;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        int cnt = 0;
        scanf("%d %d", &n, &m);
        for(int j=1; j<n; j++)
            for(int k=j+1; k<n; k++)
                if((j*j+k*k+m)%(j*k) == 0) cnt++;
        printf("%d\n", cnt);
    }
}
