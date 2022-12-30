#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;
vector<int> v;
vector<bool> u;

void f(int l, int r) {
    bool check = true;

    for(int i=0; i<N; i++)
        if(!u[i]) check = false;

    if(check) {
        ans++;
        return;
    }

    for(int i=0; i<N; i++) {
        if(u[i]) continue;

        u[i] = true;
        f(l, r + v[i]);
        u[i] = false;

        if(l + v[i] > r) continue;

        u[i] = true;
        f(l + v[i], r);
        u[i] = false;
    }
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);

    cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    u.resize(N);

    f(0, 0);

    cout << ans << "\n";
}
