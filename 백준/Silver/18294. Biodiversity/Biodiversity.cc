#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
    return m[a] > m[b];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if(m[str] == 0) v.push_back(str);

        m[str]++;
    }

    sort(v.begin(), v.end(), cmp);

    if(m[v[0]] > N/2) cout << v[0] << "\n";
    else cout << "NONE\n";
}
