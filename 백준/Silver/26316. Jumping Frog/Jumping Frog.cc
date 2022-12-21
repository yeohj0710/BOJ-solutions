#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Day #" << t << "\n";

        int N, M; cin >> N >> M;
        string str; cin >> str;

        cout << N << " " << M << "\n";
        cout << str << "\n";

        vector<int> v(N, INT_MAX); v[0] = 0;

        for(int i=0; i<N; i++)
            for(int j=max(i-(M+1), (int)0); j<i; j++)
                if(str[i] != 'X') v[i] = min(v[i], v[j] + 1);

        if(v[N-1] != INT_MAX) cout << v[N-1] << "\n";
        else cout << 0 << "\n";

        cout << "\n";
    }
}
