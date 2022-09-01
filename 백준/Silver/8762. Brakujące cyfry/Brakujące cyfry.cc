#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string ans = "";

        while(N--) {
            string a, b; cin >> a >> b;

            for(int i=0; i<=9; i++) {
                if(i == 0 && (a[0] == 'x' || b[0] == 'x')) continue;

                string x = a, y = b;

                for(int j=0; j<x.length(); j++)
                    if(x[j] == 'x') x[j] = char('0' + i);
                for(int j=0; j<y.length(); j++)
                    if(y[j] == 'x') y[j] = char('0' + i);

                int aa = stoi(x);
                int bb = stoi(y);

                if(aa % bb == 0) {
                    ans += char('0' + i);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
}
