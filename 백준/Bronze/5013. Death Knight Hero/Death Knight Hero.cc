#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int ans = 0;
    while(T--) {
        string str; cin >> str;

        bool check = true;
        for(int i=1; i<str.length(); i++)
            if(str[i-1] == 'C' && str[i] == 'D') check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
