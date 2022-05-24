#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, x; cin >> N >> x;

    if(N >= 6) {
        cout << "Love is open door\n";
        return 0;
    }

    bool check;
    if(x == 1) check = true;
    else check = false;

    for(int i=2; i<=N; i++) {
        if(check) cout << 0 << "\n";
        else cout << 1 << "\n";
        check = !check;
    }
}
