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

        for(int i=0; i<N; i++) {
            int a, b; cin >> a >> b;

            if(a + b != N) check = true;
        }

        if(check) cout << "yes\n";
        else cout << "no\n";
    }
}
