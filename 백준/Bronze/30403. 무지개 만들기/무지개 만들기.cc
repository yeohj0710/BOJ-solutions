#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int a = 0, b = 0;
    string s1 = "roygbiv", s2 = "ROYGBIV";

    for(int i=0; i<7; i++) {
        bool chk1 = false, chk2 = false;

        for(int j=0; j<str.length(); j++) {
            if(str[j] == s1[i]) chk1 = true;
            if(str[j] == s2[i]) chk2 = true;
        }

        if(chk1) a++;
        if(chk2) b++;
    }

    if(a == 7 && b == 7) cout << "YeS\n";
    else if(a == 7) cout << "yes\n";
    else if(b == 7) cout << "YES\n";
    else cout << "NO!\n";
}
