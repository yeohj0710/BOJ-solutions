#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int Min = LLONG_MAX, idx;

    for(int i=1; i<=N; i++) {
        if(abs(v[i] - (v[N] - v[i])) < Min) {
            Min = abs(v[i] - (v[N] - v[i]));
            idx = i;
        }
    }

    cout << idx << "\n";
}
