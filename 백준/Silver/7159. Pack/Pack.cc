#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    struct s { int a; bool b; };
    deque<s> d;

    for(int i=1; i<=N; i++) d.push_back({i, true});

    while(M--) {
        int x; cin >> x;

        vector<s> v;

        for(int i=0; i<x; i++) {
            v.push_back(d.front());
            d.pop_front();
        }

        for(int i=0; i<v.size(); i++)
            d.push_front({v[i].a, !v[i].b});
    }

    vector<s> u(N+1);

    for(int i=1; i<=N; i++) {
        s x = d.front(); d.pop_front();

        u[x.a] = {i, x.b};
    }

    int K; cin >> K;

    while(K--) {
        int x; cin >> x;

        s y = u[x];

        if(y.b) cout << "+";
        else cout << "-";

        cout << y.a << "\n";
    }
}
