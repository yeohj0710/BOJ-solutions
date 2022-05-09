#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int x[3];
        for(int i=0; i<3; i++) cin >> x[i];

        sort(x, x+3);

        if(x[0]*x[0] + x[1]*x[1] == x[2]*x[2]) cout << "YES\n";
        else cout << "NO\n";
    }
}

