#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(x == v[x]) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        v.resize(N*2);
        for(int i=0; i<v.size(); i++) v[i] = i;

        map<string, int> m;
        vector<string> u;
        int cnt = 0, ans = 0;

        for(int i=0; i<N; i++) {
            string a, b; cin >> a >> b;

            bool check = false;
            for(int j=0; j<u.size(); j++)
                if(a == u[j]) check = true;
            if(!check) {
                u.push_back(a);
                m[a] = cnt++;
            }

            check = false;
            for(int j=0; j<u.size(); j++)
                if(b == u[j]) check = true;
            if(!check) {
                u.push_back(b);
                m[b] = cnt++;
            }

            if(f(m[a]) == f(m[b])) ans++;
            else v[f(m[a])] = f(m[b]);
        }

        cout << t << " " << ans << "\n";
    }
}
