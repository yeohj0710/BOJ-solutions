#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int Left = 1, Right = K, ans;
    while(Left <= Right) {
        int Mid = (Left + Right)/2;
        long long cnt = 0;

        for(int i=1; i<=N; i++)
            cnt += min(Mid/i, N);

        if(cnt >= K) {
            ans = Mid;
            Right = Mid - 1;
        }
        else Left = Mid + 1;
    }
    cout << ans;
}
