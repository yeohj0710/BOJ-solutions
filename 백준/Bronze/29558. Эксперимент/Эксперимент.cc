#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, D; cin >> N >> D;

    if(N % 2 == 0) {
        for(int i=D+1; i<=D+N/2; i++) cout << i << " ";
        for(int i=D-1; i>=D-N/2; i--) cout << i << " ";
        cout << "\n";
    }
    else {
        for(int i=D-N/2; i<=D+N/2; i++) cout << i << " ";
        cout << "\n";
    }
}
