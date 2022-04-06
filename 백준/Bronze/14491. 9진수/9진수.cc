#include <cstdio>
using namespace std;

int main() {
    int N, arr[100], cnt = 0;
    scanf("%d", &N);
    while(N) {
        arr[cnt++] = N%9;
        N /= 9;
    }
    for(int i=cnt-1; i>=0; i--) printf("%d", arr[i]);
}
