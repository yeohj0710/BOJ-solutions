#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    bool a = false, b = false, c = false, d = true;

    while(N--) {
        int x, y; cin >> x >> y;

        if(x > y) swap(x, y);

        if(x == 1 && y == 3) a = true;
        else if(x == 1 && y == 4) b = true;
        else if(x == 3 && y == 4) c = true;
        else d = false;
    }

    if(a && b && c && d) cout << "Wa-pa-pa-pa-pa-pa-pow!\n";
    else cout << "Woof-meow-tweet-squeek\n";
}
