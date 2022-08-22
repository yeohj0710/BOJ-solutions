#include <bits/stdc++.h>
#define int long long
using namespace std;

unordered_map<string, int> m, idx;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return idx[a] > idx[b];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<string> v;

    for(int i=0; i<N*3; i++) {
        string str; getline(cin, str);

        if(m[str] == 0) v.push_back(str);

        m[str]++;
        idx[str] = i;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<min((int)v.size(), M); i++) cout << v[i] << "\n";
}
