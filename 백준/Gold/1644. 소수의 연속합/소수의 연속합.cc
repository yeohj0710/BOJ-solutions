#include <iostream>
using namespace std;

bool check[4000005] = {0, }, same;
int N, prime[300005] = {0, }, prime_cnt = 1, ans_cnt = 0, Left, Right;
long long sum = 0;

int main() {
    cin >> N;
    for(int i=2; i*i<=N; i++)
        for(int j=2; i*j<=N; j++) check[i*j] = 1;
    for(int i=2; i<=N; i++)
        if(!check[i]) prime[prime_cnt++] = i;
    Left = Right = 0;
    sum += prime[0];
    while(Right < prime_cnt) {
        if(sum < N) sum += prime[++Right];
        else {
            if(sum == N) ans_cnt++;
            sum -= prime[++Left];
        }
    }
    cout << ans_cnt;
}
