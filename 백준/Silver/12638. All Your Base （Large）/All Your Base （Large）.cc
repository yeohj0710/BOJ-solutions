#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        vector<char> v;
        vector<int> u(str.length());

        for(int i=0; i<str.length(); i++) {
            bool check = true;
            for(int j=0; j<v.size(); j++)
                if(v[j] == str[i]) {
                    u[i] = j + 1;
                    check = false;
                }

            if(check) {
                u[i] = v.size() + 1;
                v.push_back(str[i]);
            }
        }

        for(int i=0; i<u.size(); i++) {
            if(u[i] == 2) u[i] = 0;
            else if(u[i] >= 3) u[i]--;
        }

        int base = 0;
        for(int i=0; i<u.size(); i++) base = max(base, u[i]);
        base++;

        int ans = 0;
        for(int i=0; i<u.size(); i++) ans = ans*base + u[i];

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
