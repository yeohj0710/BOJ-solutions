#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Team #" << t << "\n";

        int N, M; cin >> N >> M;

        cout << "Games: " << N << "\n";
        cout << "Points: " << M << "\n";

        cout << "Possible records:\n";

        struct s { int a, b, c; };
        vector<s> v;

        for(int i=0; i<=N && i*3<=M; i++)
            for(int j=0; i+j<=N && i*3+j<=M; j++) {
                int k = N - i - j;

                if(i*3 + j == M) v.push_back({i, j, k});
            }

        for(int i=v.size()-1; i>=0; i--)
            cout << v[i].a << "-" << v[i].b << "-" << v[i].c << "\n";

        cout << "\n";
    }
}
