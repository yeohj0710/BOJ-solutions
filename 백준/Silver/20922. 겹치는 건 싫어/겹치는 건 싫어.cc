#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int cnt[200001] = {}, ans = 0;
    int i=0, j=0;

    while(true) {
        if(i > j || j >= N) break;

        if(cnt[arr[j]] < K) {
            cnt[arr[j]]++;
            j++;
            ans = max(ans, j-i);
        }
        else if(cnt[arr[j]] == K) {
            cnt[arr[i]]--;
            i++;
        }
    }

    cout << ans;
}
