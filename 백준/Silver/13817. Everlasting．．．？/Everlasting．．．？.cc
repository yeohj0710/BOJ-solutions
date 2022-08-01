#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        vector<int> u, w;

        for(int i=0; i<v.size() && v[i] <= a; i++) {
            if(a % v[i] == 0) u.push_back(v[i]);
        }
        for(int i=0; i<v.size() && v[i] <= b; i++) {
            if(b % v[i] == 0) w.push_back(v[i]);
        }

        int x = u[u.size() - 1];
        for(int i=0; i<u.size()-1; i++) x -= u[i];

        int y = w[w.size() - 1];
        for(int i=0; i<w.size()-1; i++) y -= w[i];

        if(x > y) cout << "a\n";
        else cout << "b\n";
    }
}
