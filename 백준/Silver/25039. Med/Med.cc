#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string a; int b; };

bool cmp(s x, s y) {
    if(x.b != y.b) return x.b > y.b;
    else return x.a < y.a;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].a;

        for(int j=0; j<5; j++) {
            int x; cin >> x;

            v[i].b += x;
        }
    }

    for(int i=0; i<N; i++) {
        vector<s> u(v);
        string str = u[i].a;

        u[i].b += 500;

        sort(u.begin(), u.end(), cmp);

        for(int j=0; j<N; j++)
            if(u[j].a == str) cout << j+1 << " ";

        u = v;

        for(int j=0; j<N; j++)
            if(j != i) u[j].b += 500;

        sort(u.begin(), u.end(), cmp);

        for(int j=0; j<N; j++)
            if(u[j].a == str) cout << j+1 << "\n";
    }
}
