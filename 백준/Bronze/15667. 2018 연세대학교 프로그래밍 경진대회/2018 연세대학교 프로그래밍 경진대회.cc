#include <cstdio>
using namespace std;

int main() {
    int N, i;
    scanf("%d", &N);
    for(i=1; i<=10000; i++) {
        if(1+i+i*i == N) break;
    }
    printf("%d", i);
}
