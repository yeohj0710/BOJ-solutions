#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        string str; cin >> str;
        if(str == "0") break;

        string ans = str;

        while(true) {
            if(ans.length() % 2 == 1) break;

            string prev = str;
            str = "";

            for(int i=0; i<ans.length(); i+=2)
                for(int j=0; j<ans[i]-'0'; j++) str += ans[i+1];

            ans = str;
            if(ans == prev) break;
        }

        cout << "Test " << t << ": " << ans << "\n";
    }
}
