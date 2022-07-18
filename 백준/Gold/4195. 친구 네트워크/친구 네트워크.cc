#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v(200001);
vector<int> u;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        for(int i=1; i<=200000; i++) v[i] = i;

        int N; cin >> N;

        u.clear();
        u.resize(200001, 1);

        map<string, int> m;
        int cnt = 1;

        while(N--) {
            string a, b; cin >> a >> b;

            if(m[a] == 0) m[a] = cnt++;
            if(m[b] == 0) m[b] = cnt++;

            if(v[f(m[a])] != f(m[b])) {
                u[f(m[b])] += u[f(m[a])];
                v[f(m[a])] = f(m[b]);
            }

            cout << u[f(m[a])] << "\n";
        }
    }
}
