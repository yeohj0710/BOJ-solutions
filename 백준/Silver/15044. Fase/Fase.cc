#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = K;
    for(int i=K; i<N; i++) {
        if(v[i] == v[i-1]) ans++;
        else break;
    }

    cout << ans << "\n";
}
