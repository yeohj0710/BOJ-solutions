#include <cstdio>
using namespace std;

int main() {
    int N, cnt = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        int temp = i;
        while(temp) {
            if(temp%10 == 3 || temp%10 == 6 || temp%10 == 9) cnt++;
            temp /= 10;
        }
    }
    printf("%d", cnt);
}
