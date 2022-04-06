#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long K, N; cin >> K >> N;

    vector<long long> arr(K);
    long long Max = 0;
    for(int i=0; i<K; i++) {
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }

    long long Left = 1, Right = Max, Mid, ans = 0;
    while(Left <= Right) {
        Mid = (Left + Right)/2;

        long long cnt = 0;
        for(int i=0; i<K; i++) cnt += arr[i]/Mid;

        if(cnt >= N) {
            Left = Mid + 1;
            ans = max(ans, Mid);
        }
        else Right = Mid - 1;
    }
    cout << ans;
}
