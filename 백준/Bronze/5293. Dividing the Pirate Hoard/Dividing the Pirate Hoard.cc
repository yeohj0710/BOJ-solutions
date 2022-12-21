#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    for(int i=0; i<M; i++) {
        int x = N / M + N % M;

        cout << x << " ";

        N -= x;
    }
    cout << "\n";

    cout << N << "\n";
}
