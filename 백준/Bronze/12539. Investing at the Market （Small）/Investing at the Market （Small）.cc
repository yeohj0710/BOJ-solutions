#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        vector<int> v(12);
        for(int i=0; i<12; i++) cin >> v[i];

        int a = -1, b = -1, Max = 0;

        for(int i=0; i<12; i++)
            for(int j=i+1; j<12; j++) {
                if(v[i] > N || v[i] >= v[j]) continue;

                int x = (N / v[i]) * (v[j] - v[i]);

                if(x > Max || (x == Max && (a == -1 || v[i] < v[a]))) {
                    Max = x;
                    a = i, b = j;
                }
            }

        if(Max > 0) cout << a+1 << " " << b+1 << " " << Max << "\n";
        else cout << "IMPOSSIBLE\n";
    }
}
