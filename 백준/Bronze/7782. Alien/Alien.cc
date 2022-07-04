#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x, y; cin >> x >> y;

    bool check = false;
    while(N--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if(x1 <= x && x <= x2 && y1 <= y && y <= y2) check = true;
    }

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
