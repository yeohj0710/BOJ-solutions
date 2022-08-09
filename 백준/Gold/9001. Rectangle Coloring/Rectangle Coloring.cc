#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
struct s { int x1, y1, x2, y2; };

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
        v.resize(N+1);

        for(int i=1; i<=N; i++) v[i] = i;

        vector<s> u(N+1);
        for(int i=1; i<=N; i++)
            cin >> u[i].x1 >> u[i].y1 >> u[i].x2 >> u[i].y2;

        for(int i=1; i<=N; i++)
            for(int j=i+1; j<=N; j++) {
                bool check = true;

                if(u[i].x1 > u[j].x2) check = false;
                if(u[i].x2 < u[j].x1) check = false;
                if(u[i].y1 > u[j].y2) check = false;
                if(u[i].y2 < u[j].y1) check = false;

                if(!check) continue;

                if(f(i) != f(j)) v[f(i)] = f(j);
            }

        vector<int> w;
        for(int i=1; i<=N; i++) w.push_back(f(i));

        sort(w.begin(), w.end());
        w.erase(unique(w.begin(), w.end()), w.end());

        cout << w.size() << "\n";
    }
}
