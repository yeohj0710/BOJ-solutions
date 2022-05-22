#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int ans = INT_MAX;
        for(int i=0; i<str.length(); i++)
            for(int j=i+1; j<str.length(); j++) {
                string temp = str.substr(i, j-i+1);

                bool check = true;

                bool flag = false;
                for(int k=0; k<temp.length(); k++)
                    if(temp[k] >= 'a' && temp[k] <= 'z') flag = true;

                if(!flag) check = false;

                flag = false;
                for(int k=0; k<temp.length(); k++)
                    if(temp[k] >= 'A' && temp[k] <= 'Z') flag = true;

                if(!flag) check = false;

                flag = false;
                for(int k=0; k<temp.length(); k++)
                    if(temp[k] >= '0' && temp[k] <= '9') flag = true;

                if(!flag) check = false;

                if(check && temp.length() >= 6) ans = min(ans, (int)temp.length());
            }

        if(ans != INT_MAX) cout << ans << "\n";
        else cout << 0 << "\n";
    }
}
