#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cur = 0;
    bool check = true;

    while(N--) {
        int x; cin >> x;

        cur += x;

        if(cur <= 0 && N > 0) check = false;
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
