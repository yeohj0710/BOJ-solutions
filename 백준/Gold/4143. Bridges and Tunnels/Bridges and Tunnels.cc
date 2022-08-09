#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        v.clear();
        v.resize(1e5 + 1);
        for(int i=1; i<=1e5; i++) v[i] = i;

        vector<int> u(1e5 + 1, 1);

        int cnt = 1;
        map<string, int> m;

        while(N--) {
            string a, b; cin >> a >> b;

            if(m[a] == 0) m[a] = cnt++;
            if(m[b] == 0) m[b] = cnt++;

            if(f(m[a]) != f(m[b])) {
                u[f(m[b])] += u[f(m[a])];

                v[f(m[a])] = f(m[b]);
            }

            cout << u[f(m[b])] << "\n";
        }
    }
}
