#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        int cnt = 0;
        for(int i=0; i<a.length()-b.length()+1; i++)
            if(a.substr(i, b.length()) == b) {
                cnt++;
                i += b.length() - 1;
            }

        cout << a.length() - cnt * (b.length() - 1) << "\n";
    }
}
