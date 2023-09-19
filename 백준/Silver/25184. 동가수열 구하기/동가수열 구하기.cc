#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=(N+1)/2; i>=1; i--) {
        cout << i << " ";

        if(N % 2 == 1 && i == 1) break;

        if(i + N/2 <= N) cout << i + N/2 << " ";
    }
    cout << "\n";
}
