#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        int cnt[12] = {};

        while(N--) {
            int a, b, c; cin >> a >> b >> c;

            cnt[b-1]++;
        }

        string mon[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        cout << "Case #" << t << ":\n";

        for(int i=0; i<12; i++) {
            cout << mon[i] << ":";
            for(int j=0; j<cnt[i]; j++) cout << "*";
            cout << "\n";
        }
    }
}
