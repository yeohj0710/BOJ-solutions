#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string s; cin >> s;

        bool check = false;
        for(int i=0; i<s.length(); i++) {
            s = s.back() + s.substr(0, s.length()-1);

            for(int j=0; j<s.length()-str.length()+1; j++)
                if(s.substr(j, str.length()) == str) check = true;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
