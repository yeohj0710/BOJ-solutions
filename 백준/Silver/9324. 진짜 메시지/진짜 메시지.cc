#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt[26] = {};
        bool check = true;

        for(int i=0; i<str.length(); i++) {
            cnt[str[i] - 'A']++;

            if(cnt[str[i] - 'A'] % 3 == 0) {
                if(i+1 >= str.length()) check = false;
                else if(str[i+1] != str[i]) check = false;

                i++;
            }
        }

        if(check) cout << "OK\n";
        else cout << "FAKE\n";
    }
}
