#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=min(i*i, (int)100); j++) cout << "*";

        if(i*i > 100) cout << "...";

        cout << "\n";
    }
}
