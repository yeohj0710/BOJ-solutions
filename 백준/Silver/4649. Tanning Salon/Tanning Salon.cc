#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        string str; cin >> str;

        vector<bool> v(26);
        int ans = 0;

        for(int i=0; i<str.length(); i++) {
            int cnt = 0;

            for(int i=0; i<26; i++)
                if(v[i]) cnt++;

            int x = str[i] - 'A';

            if(!v[x]) {
                if(cnt >= N) ans++;

                v[x] = true;
            }
            else v[x] = false;
        }

        if(ans == 0) cout << "All customers tanned successfully.\n";
        else cout << ans << " customer(s) walked away.\n";
    }
}
