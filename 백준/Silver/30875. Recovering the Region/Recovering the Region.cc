#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=0; i<N*N; i++) {
        int x; cin >> x;
    }

    for(int i=1; i<=N; i++) {
        for(int j=0; j<N; j++) cout << i << " ";
        cout << "\n";
    }
}
