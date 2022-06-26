#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int a = 0, b = 0, r = 0;
    while(N--) {
        int x; cin >> x;

        a += x/2;
        b += x/2;

        if(x % 2 == 1) r++;
    }

    bool check = false;
    for(int i=0; i<=r; i++) {
        if(a + i >= x1 && a + i <= y1 && b + (r - i) >= x2 && b + (r - i) <= y2) check = true;
    }

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
