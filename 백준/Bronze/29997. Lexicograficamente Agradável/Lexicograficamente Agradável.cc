#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; int N; cin >> str >> N;

    vector<string> v(N, "");

    for(int i=0; i<str.length(); i++) v[i % N] += str[i];

    for(int i=0; i<N; i++) sort(v[i].begin(), v[i].end());

    string ans = "";

    for(int i=0; i<str.length(); i++) ans += v[i % N][i / N];

    cout << ans << "\n";
}
