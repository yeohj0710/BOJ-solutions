#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return a > b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;

    while(N--) {
        string str; cin >> str;

        m[str]++;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0] << " " << m[v[0]] << "\n";
}
