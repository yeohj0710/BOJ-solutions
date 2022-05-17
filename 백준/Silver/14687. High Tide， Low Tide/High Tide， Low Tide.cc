#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> ans(N);
    int curr = 0;

    for(int i=(N+1)/2 - 1; i>=0; i--) {
        ans[curr] = v[i];
        curr += 2;
        if(curr >= N) break;
    }

    curr = 1;
    for(int i=(N+1)/2; i<N; i++) {
        ans[curr] = v[i];
        curr += 2;
        if(curr >= N) break;
    }

    for(int i=0; i<N; i++) cout << ans[i] << " ";
    cout << "\n";
}
