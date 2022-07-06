#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int cur = 0;
    for(int i=0; i<N-M+1; i++) {
        cout << i << " " << i+1 << "\n";
        cur = i+2;
    }

    for(int i=0; i<M-2; i++) {
        cout << 1 << " " << cur+i << "\n";
    }
}
