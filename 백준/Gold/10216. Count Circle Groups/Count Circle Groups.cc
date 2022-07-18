#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, r; };
vector<int> u;

int f(int x) {
    if(u[x] == x) return x;
    else return u[x] = f(u[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<s> v(N);
        for(int i=0; i<N; i++)
            cin >> v[i].x >> v[i].y >> v[i].r;

        u.clear();
        u.resize(N);
        for(int i=0; i<N; i++) u[i] = i;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                if(f(i) == f(j)) continue;
                if(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2) > pow(v[i].r + v[j].r, 2)) continue;

                u[f(i)] = f(j);
            }

        vector<int> w(N);
        for(int i=0; i<N; i++) w[i] = f(i);

        sort(w.begin(), w.end());
        w.erase(unique(w.begin(), w.end()), w.end());

        cout << w.size() << "\n";
    }
}
