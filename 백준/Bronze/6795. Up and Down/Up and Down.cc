#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, N; cin >> a >> b >> c >> d >> N;

    int x = 0, y = 0;

    for(int i=0; i<N; i++) {
        if(i % (a + b) < a) x++;
        else x--;

        if(i % (c + d) < c) y++;
        else y--;
    }

    if(x == y) cout << "Tied\n";
    else if(x > y) cout << "Nikky\n";
    else if(x < y) cout << "Byron\n";
}
