#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    for(int i=0; i<n*3; i++) {
        for(int j=0; j<n*4; j++) {
            if(i / n == 0 && j / n == 0) cout << "G";
            else if(i / n == 1 && j / n == 1) cout << "I";
            else if(i / n == 2 && j / n == 2) cout << "S";
            else if(i / n == 1 && j / n == 3) cout << "T";
            else cout << ".";
        }
        cout << "\n";
    }
}
