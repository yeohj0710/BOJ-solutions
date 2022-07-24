#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, bool> m;

    while(N--) {
        string str; cin >> str;

        m[str] = true;
    }

    vector<string> v;

    while(M--) {
        string str; cin >> str;

        if(m[str]) v.push_back(str);
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
