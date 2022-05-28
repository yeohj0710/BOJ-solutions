#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length()-2; i++) {
        bool check = false;

        if(str[i+1] == str[i]+1 && str[i+2] == str[i+1]+1) check = true;

        if(i+3 < str.length() && str[i+3] == str[i+2] + 1) check = false;
        if(i > 0 && str[i] == str[i-1] + 1) check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
