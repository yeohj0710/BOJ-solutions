#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    while(N--) {
        int a, b; cin >> a >> b;

        if(M >= a && M <= b) M++;
    }

    cout << M << "\n";
}
