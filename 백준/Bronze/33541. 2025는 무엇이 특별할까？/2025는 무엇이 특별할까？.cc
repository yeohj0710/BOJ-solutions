#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    for(int i=x+1; i<10000; i++) {
        int a = i / 100, b = i % 100;

        if(pow(a + b, 2) == i) {
            cout << i << "\n";
            return 0;
        }
    }
    
    cout << -1 << "\n";
}
