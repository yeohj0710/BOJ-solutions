#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    for(int t=1; ; t++) {
        int N; cin >> N; cin.ignore();
        if(N == 0) break;

        vector<string> v(N);
        for(int i=0; i<N; i++) getline(cin, v[i]);

        sort(v.begin(), v.end());

        cout << t << "\n";

        for(int i=0; i<N; i++) cout << v[i] << "\n";
    }
}
