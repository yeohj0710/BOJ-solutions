#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'Y') {
            ans++;
            for(int j=i; j<str.length(); j+=(i+1)) {
                if(str[j] == 'Y') str[j] = 'N';
                else str[j] = 'Y';
            }
        }
    }

    cout << ans << "\n";
}
