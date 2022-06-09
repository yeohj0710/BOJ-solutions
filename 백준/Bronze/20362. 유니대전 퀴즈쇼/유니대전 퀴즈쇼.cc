#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    vector<pair<string, string>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    int x;
    string key;

    for(int i=0; i<N; i++)
        if(v[i].first == str) {
            x = i;
            key = v[i].second;
        }

    int ans = 0;
    for(int i=0; i<x; i++)
        if(v[i].second == key) ans++;

    cout << ans << "\n";
}
