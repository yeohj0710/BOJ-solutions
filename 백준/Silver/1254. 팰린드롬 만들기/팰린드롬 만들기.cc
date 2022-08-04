#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = INT_MAX;

    for(int i=str.length()/2; i<str.length(); i++) {
        bool check = true;

        for(int j=0; i-j>=0 && i+j<str.length(); j++)
            if(str[i-j] != str[i+j]) check = false;

        if(check) ans = min(ans, i*2 + 1);
    }

    for(int i=(str.length()+1)/2; i<str.length(); i++) {
        bool check = true;

        for(int j=0; i-j-1>=0 && i+j<str.length(); j++)
            if(str[i+j] != str[i-1-j]) check = false;

        if(check) ans = min(ans, i*2);
    }

    cout << ans << "\n";
}
