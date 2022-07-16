#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else if(a.length() != b.length()) return a.length() > b.length();
    else return a < b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v;

    while(N--) {
        string str; cin >> str;

        if(str.length() < M) continue;

        if(m[str] == 0) v.push_back(str);

        m[str]++;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
