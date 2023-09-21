#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    if(N <= 3) {
        cout << -1 << "\n";
        return 0;
    }

    cout << "4 2 3 1 ";

    for(int i=5; i<=N; i++) cout << i << " ";

    cout << "\n";
}
