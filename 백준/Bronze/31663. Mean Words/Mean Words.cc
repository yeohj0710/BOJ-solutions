#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);
    int M = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        M = max(M, (int)v[i].length());
    }

    vector<int> u(M), w(M);
    string s = "";

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(i > v[j].length() - 1) continue;

            u[i] += v[j][i] - 'a';
            w[i]++;
        }

        s += 'a' + (u[i] / w[i]);
    }

    cout << s << "\n";
}
