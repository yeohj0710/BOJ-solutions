#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int a, int b, double s) {
    return max((int)(a + 15 * (s - 1.0 / (1 + pow(10, (double)(b - a) / 400)))), (int)0);
}

unordered_map<string, int> m;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return a < b;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v;

    while(N--) {
        int x; string str; cin >> x >> str;

        m[str] = x;
        v.push_back(str);
    }

    int M; cin >> M;

    while(M--) {
        string a, b; int c; cin >> a >> b >> c;

        double s;

        if(c == 1) s = 1;
        else if(c == 2) s = 0;
        else s = 0.5;

        int aa = m[a], bb = m[b];

        int x = f(aa, bb, s);
        int y = f(bb, aa, 1-s);

        m[a] = x;
        m[b] = y;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++)
        cout << m[v[i]] << " " << v[i] << "\n";
}
