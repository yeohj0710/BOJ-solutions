#include <cstdio>
using namespace std;

int main() {
    int N, temp, sum, cnt = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        temp = i;
        sum = 0;
        while(temp) {
            sum += temp%10;
            temp /= 10;
        }
        if(i%sum == 0) cnt++;
    }
    printf("%d", cnt);
}
