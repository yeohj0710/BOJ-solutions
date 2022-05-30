#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m1, m2;
    vector<string> v;

    for(int i=0; i<N; i++) {
        string str; cin >> str;
        m1[str]++;
        v.push_back(str);
    }

    for(int i=0; i<N; i++) {
        string str; cin >> str;
        m2[str]++;
        v.push_back(str);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans = 0;
    for(int i=0; i<v.size(); i++) ans += min(m1[v[i]], m2[v[i]]);

    cout << ans << "\n";
}
