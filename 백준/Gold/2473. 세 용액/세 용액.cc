#include <cstdio>
#include <algorithm>
#define INF 3000000001
using namespace std;

long long arr[5005] = {0, };
long long Abs(long long a) { return a>=0?a:-a; }

int main() {
    int N, Left, Right;
    long long temp, Min = INF, ans[3];
    scanf("%d", &N);
    for(int i=1; i<=N; i++) scanf("%lld", &arr[i]);
    sort(arr+1, arr+N+1);
    for(int i=1; i<=N-2; i++) {
        Left = i+1, Right = N;
        while(Left < Right) {
            temp = arr[i] + arr[Left] + arr[Right];
            if(Abs(temp) < Min) {
                Min = Abs(temp);
                ans[0] = arr[i], ans[1] = arr[Left], ans[2] = arr[Right];
            }
            if(temp < 0) Left++;
            else Right--;
        }
    }
    printf("%lld %lld %lld", ans[0], ans[1], ans[2]);
}
