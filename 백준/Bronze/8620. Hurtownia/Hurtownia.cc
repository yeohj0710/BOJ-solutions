#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<char, int> m;
    vector<char> v;

    while(N--) {
        char c; int a; cin >> c >> a;

        v.push_back(c);

        m[c] += a;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << " " << m[v[i]] << "\n";
}
