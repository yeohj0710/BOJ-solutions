#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b;
vector<int> v(6), u, w;

void f(int idx) {
    if(idx == 6) {
        if(u.size() != 3 || w.size() != 3) return;

        int x = 0, y = 0;
        for(int i=0; i<u.size(); i++) x += u[i];
        for(int i=0; i<w.size(); i++) y += w[i];

        if(x == a && y == b) {
            for(int i=0; i<u.size(); i++) cout << u[i] << " ";
            for(int i=0; i<w.size(); i++) cout << w[i] << " ";
            cout << "\n";
        }

        return;
    }

    u.push_back(v[idx]);
    f(idx + 1);
    u.pop_back();

    w.push_back(v[idx]);
    f(idx + 1);
    w.pop_back();
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<6; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    cin >> a >> b;

    f(0);
}
