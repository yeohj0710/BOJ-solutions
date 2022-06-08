#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool check = true;
        for(int i=2; i<=1000000; i++) {
            if(N % i == 0) {
                check = false;
                break;
            }
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
