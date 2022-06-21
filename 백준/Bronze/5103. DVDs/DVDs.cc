#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int a, b; cin >> a >> b;

        int N; cin >> N;

        while(N--) {
            char c; cin >> c;
            int x; cin >> x;

            if(c == 'S') b = max(b - x, (int)0);
            else if(c == 'R') b = min(b + x, a);
        }

        cout << str << " " << b << "\n";
    }
}
