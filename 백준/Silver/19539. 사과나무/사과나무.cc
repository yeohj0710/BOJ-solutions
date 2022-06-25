#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        a += x;
        b += x/2;
    }

    bool check = true;
    if(a % 3 != 0) check = false;
    if(b < a/3) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
