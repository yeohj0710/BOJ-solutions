#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int sum = 0;
    for(int i=0; i<K; i++) sum += arr[i];

    int Max = sum;
    for(int i=0; i<N; i++) {
        sum = sum - arr[i] + arr[(i+K)%N];
        Max = max(Max, sum);
    }

    cout << Max;
}
