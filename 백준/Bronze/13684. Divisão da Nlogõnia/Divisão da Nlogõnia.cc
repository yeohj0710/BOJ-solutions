#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int a, b; cin >> a >> b;

        for(int i=0; i<N; i++) {
            int x, y; cin >> x >> y;

            if(x == a || y == b) cout << "divisa\n";
            else if(x > a && y > b) cout << "NE\n";
            else if(x < a && y > b) cout << "NO\n";
            else if(x > a && y < b) cout << "SE\n";
            else cout << "SO\n";
        }
    }
}
