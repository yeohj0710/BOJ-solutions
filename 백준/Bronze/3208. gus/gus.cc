#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    if(N <= M) cout << (N - 1) * 2 << "\n";
    else cout << (M - 1) * 2 + 1 << "\n";
}
