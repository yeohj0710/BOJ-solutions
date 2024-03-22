#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    bool chk = false;

    for(int i=1; i<=s.length()-1; i++) {
        int a = stoll(s.substr(0, i));
        int b = stoll(s.substr(i, s.length()-i));

        if(a <= 1 || b <= 1) continue;
        if(to_string(a).length() + to_string(b).length() != s.length()) continue;

        bool chk_a = true, chk_b = true;

        for(int j=2; j*j<=a; j++) {
            if(a % j == 0) {
                chk_a = false;
                break;
            }
        }

        for(int j=2; j*j<=b; j++) {
            if(b % j == 0) {
                chk_b = false;
                break;
            }
        }

        if(chk_a && chk_b) {
            chk = true;
            break;
        }
    }

    if(chk) cout << "TAK\n";
    else cout<< "NIE\n";
}
