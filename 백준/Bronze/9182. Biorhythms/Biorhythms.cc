#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == -1 && b == -1 && c == -1 && d == -1) break;

        for(int i=d+1; i<=21252; i++) {
            if(i % 23 == a % 23 && i % 28 == b % 28 && i % 33 == c % 33) {
                cout << "Case " << t << ": the next triple peak occurs in " << i - d << " days.\n";
                break;
            }
        }
    }
}
