#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    if(N == 2) {
        cout << "NO\n";

        return 0;
    }

    cout << "YES\n";

    if(N % 4 == 1 || N % 4 == 2) {
        for(int i=1; i<=N-2; i+=2) cout << i << " ";
        for(int i=2; i<=N; i+=2) cout << i << " ";

        if(N % 4 == 1) cout << N << " ";
        else cout << N-1 << " ";
    }
    else {
        for(int i=1; i<=N; i+=2) cout << i << " ";
        for(int i=2; i<=N; i+=2) cout << i << " ";
    }

    cout << "\n";
}
