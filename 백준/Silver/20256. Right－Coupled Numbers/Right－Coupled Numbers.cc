#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool check = false;
        for(int i=1; i<=N; i++) {
            for(int j=i; j<=i*2; j++) {
                if(i*j > N) break;

                if(i*j == N) check = true;
            }
        }

        if(check) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
