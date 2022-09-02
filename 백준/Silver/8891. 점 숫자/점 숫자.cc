#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int x1, y1, x2, y2;

        int cnt = 0;
        bool check = false;

        for(int i=2; ; i++) {
            for(int j=1; j<i; j++) {
                cnt++;

                if(cnt == a) {
                    x1 = j, y1 = i-j;

                    check = true;
                    break;
                }
            }
            if(check) break;
        }

        cnt = 0;
        check = false;

        for(int i=2; ; i++) {
            for(int j=1; j<i; j++) {
                cnt++;

                if(cnt == b) {
                    x2 = j, y2 = i-j;

                    check = true;
                    break;
                }
            }
            if(check) break;
        }

        int x = x1 + x2, y = y1 + y2;

        cnt = 0;
        check = false;

        for(int i=2; ; i++) {
            for(int j=1; j<i; j++) {
                cnt++;

                if(j == x && i-j == y) {
                    cout << cnt << "\n";

                    check = true;
                    break;
                }
            }
            if(check) break;
        }
    }
}
