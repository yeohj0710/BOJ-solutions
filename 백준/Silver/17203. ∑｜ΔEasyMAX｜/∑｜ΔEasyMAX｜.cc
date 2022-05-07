#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, Q; cin >> N >> Q;

    vector<int> arr(N), diff_sum(N);

    for(int i=0; i<N; i++) cin >> arr[i];
    for(int i=1; i<N; i++)
        diff_sum[i] = diff_sum[i-1] + abs(arr[i] - arr[i-1]);

    while(Q--) {
        int i, j; cin >> i >> j;

        if(i < j) cout << diff_sum[j-1] - diff_sum[i-1] << "\n";
        else cout << 0 << "\n";
    }
}
