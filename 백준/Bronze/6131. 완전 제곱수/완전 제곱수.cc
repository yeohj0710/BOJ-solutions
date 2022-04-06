#include <cstdio>
using namespace std;

int main() {
    int N, a, b, cnt = 0;
    scanf("%d", &N);
    for(int i=1; i<=500; i++)
        for(int j=i; j<=500; j++)
            if(j*j - i*i == N) cnt++;
    printf("%d", cnt);
}
