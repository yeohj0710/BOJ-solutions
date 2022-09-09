#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    int ans = 0;

    while(getline(cin, str)) {
        for(int i=3; i<str.length(); i++)
            if(str[i-3] == 'j' && str[i-2] == 'o' && str[i-1] == 'k' && str[i] == 'e') ans++;
    }

    cout << ans << "\n";
}
