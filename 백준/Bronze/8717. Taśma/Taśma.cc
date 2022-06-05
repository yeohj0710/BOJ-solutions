#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;
    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int part = 0, ans = INT_MAX;
    for(int i=0; i<N-1; i++) {
        part += v[i];
        ans = min(ans, abs(part - (sum - part)));
    }

    cout << ans << "\n";
}
