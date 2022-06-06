#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        while(N--) {
            vector<bool> v(5);
            int cnt = 0;

            for(int i=0; i<5; i++) {
                int x; cin >> x;

                if(x <= 127) {
                    v[i] = true;
                    cnt++;
                }
                else v[i] = false;
            }

            if(cnt == 1) {
                for(int i=0; i<5; i++)
                    if(v[i]) cout << char('A' + i) << "\n";
            }
            else cout << "*\n";
        }
    }
}
