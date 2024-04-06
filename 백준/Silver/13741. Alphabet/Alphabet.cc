#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    int N = s.length();

    vector<int> v(N);
    for(int i=0; i<N; i++) v[i] = s[i] - 'a';

    vector<int> u(N, 1);

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++)
            if(v[i] > v[j]) u[i] = max(u[i], u[j] + 1);

    int mx = 0;

    for(int i=0; i<N; i++) mx = max(mx, u[i]);

    cout << 26 - mx << "\n";
}
