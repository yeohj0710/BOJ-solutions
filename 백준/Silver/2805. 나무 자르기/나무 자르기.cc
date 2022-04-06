#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long N, M; cin >> N >> M;

    vector<long long> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());

    long long Left = 1, Right = arr[0], ans = 0;
    while(Left <= Right) {
        long long Mid = (Left + Right)/2;

        long long sum = 0;
        for(int i=0; i<N && arr[i]>Mid; i++) sum += arr[i] - Mid;

        if(sum < M) Right = Mid - 1;
        else {
            ans = Mid;
            Left = Mid + 1;
        }
    }
    cout << ans;
}
