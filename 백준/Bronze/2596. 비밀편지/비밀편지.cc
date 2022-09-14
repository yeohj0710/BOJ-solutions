#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[8] = {"000000", "001111", "010011", "011100",
                    "100110", "101001", "110101", "111010"};

    int N; cin >> N;

    string str; cin >> str;

    string ans = "";

    for(int i=0; i<str.length(); i+=6) {
        string tmp = str.substr(i, 6);

        int x = -1;

        for(int j=0; j<8; j++) {
            int cnt = 0;

            for(int k=0; k<6; k++)
                if(tmp[k] != v[j][k]) cnt++;

            if(cnt <= 1) x = j;
        }

        if(x == -1) {
            cout << i/6 + 1 << "\n";
            return 0;
        }

        ans += char('A' + x);
    }

    cout << ans << "\n";
}
