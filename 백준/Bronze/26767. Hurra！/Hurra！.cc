#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        if(i % 7 == 0 && i % 11 == 0) cout << "Wiwat!\n";
        else if(i % 7 == 0) cout << "Hurra!\n";
        else if(i % 11 == 0) cout << "Super!\n";
        else cout << i << "\n";
    }
}
