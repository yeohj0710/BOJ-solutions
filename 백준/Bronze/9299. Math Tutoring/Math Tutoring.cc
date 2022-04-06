#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ": ";

        int n; cin >> n;
        cout << n-1 << " ";

        while(true) {
            int a; cin >> a;
            if(n == 0) break;
            cout << a*n << " ";
            n--;
        }

        cout << "\n";
    }
}
