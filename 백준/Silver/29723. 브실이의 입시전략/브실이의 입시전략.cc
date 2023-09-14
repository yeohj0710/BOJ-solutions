#include <bits/stdc++.h>
#define int long long
using namespace std;

unordered_map<string, int> m;

bool cmp(string a, string b) {
    return m[a] < m[b];
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    unordered_map<string, bool> mm;

    vector<string> v, u;

    for(int i=0; i<N; i++) {
        string str; int x; cin >> str >> x;

        m[str] = x;

        v.push_back(str);
    }

    int sum = 0;

    for(int i=0; i<K; i++) {
        string str; cin >> str;

        sum += m[str];
        mm[str] = true;
    }

    for(int i=0; i<v.size(); i++)
        if(!mm[v[i]]) u.push_back(v[i]);

    sort(u.begin(), u.end(), cmp);

    int mn = sum, mx = sum;

    for(int i=0; i<M-K; i++) {
        mn += m[u[i]];
        mx += m[u[u.size()-1-i]];
    }

    cout << mn << " " << mx << "\n";
}
