#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return a < b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    string str;
    while(cin >> str) m[str]++;

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++)
        cout << v[i] << " " << m[v[i]] << "\n";
}
