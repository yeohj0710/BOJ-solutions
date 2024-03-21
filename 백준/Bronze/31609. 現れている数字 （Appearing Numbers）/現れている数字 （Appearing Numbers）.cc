#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<bool> v(10);

    while(N--) {
        int x; cin >> x;

        v[x] = true;
    }

    for(int i=0; i<10; i++)
        if(v[i]) cout << i << "\n";
}
