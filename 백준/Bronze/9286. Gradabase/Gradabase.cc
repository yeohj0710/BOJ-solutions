#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ":\n";

        int n; cin >> n;
        while(n--) {
            int a; cin >> a;
            if(a < 6) cout << a+1 << "\n";
        }
    }
}
