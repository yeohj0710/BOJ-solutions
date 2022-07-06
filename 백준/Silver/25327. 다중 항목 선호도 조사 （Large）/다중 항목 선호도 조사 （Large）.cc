#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<pair<pair<string, string>, string>, int> m;

    while(N--) {
        string a, b, c; cin >> a >> b >> c;
        string d = "-";

        m[{{a, b}, c}]++;
        m[{{d, b}, c}]++;
        m[{{a, d}, c}]++;
        m[{{a, b}, d}]++;
        m[{{d, d}, c}]++;
        m[{{d, b}, d}]++;
        m[{{a, d}, d}]++;
        m[{{d, d}, d}]++;
    }

    while(M--) {
        string a, b, c; cin >> a >> b >> c;

        cout << m[{{a, b}, c}] << "\n";
    }
}
