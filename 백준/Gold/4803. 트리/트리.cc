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

    for(int t=1; ; t++) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        vector<bool> w(N+1);

        while(M--) {
            int a, b; cin >> a >> b;

            if(f(a) == f(b)) w[f(a)] = true;
            else {
                if(w[f(a)] || w[f(b)]) w[f(a)] = w[f(b)] = true;

                v[f(a)] = f(b);
            }
        }

        vector<int> u;

        for(int i=1; i<=N; i++) {
            if(w[f(i)]) continue;
            u.push_back(f(i));
        }

        sort(u.begin(), u.end());
        u.erase(unique(u.begin(), u.end()), u.end());

        cout << "Case " << t << ": ";

        if(u.size() == 0) cout << "No trees.\n";
        else if(u.size() == 1) cout << "There is one tree.\n";
        else if(u.size() >= 2) cout << "A forest of " << u.size() << " trees.\n";
    }
}
