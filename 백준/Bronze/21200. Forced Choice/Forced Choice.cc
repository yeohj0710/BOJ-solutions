#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, T; cin >> N >> M >> T;

    while(T--) {
        int a; cin >> a;

        bool check = false;
        while(a--) {
            int x; cin >> x;

            if(x == M) check = true;
        }

        if(check) cout << "KEEP\n";
        else cout << "REMOVE\n";
    }
}
