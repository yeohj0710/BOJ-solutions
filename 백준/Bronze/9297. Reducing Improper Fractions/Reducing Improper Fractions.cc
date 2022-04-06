#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ": ";

        int a, b; cin >> a >> b;

        if(a == 0) {
            cout << "0\n";
            continue;
        }

        if(a >= b) cout << a/b << " ";
        if(a % b != 0) cout << a%b << "/" << b;

        cout << "\n";
    }
}
