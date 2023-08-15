#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    bool chk = true;

    if(str.length() <= 2) chk = false;
    else if(str.substr(0, 2) != "io") chk = false;
    else {
        for(int i=2; i<str.length(); i++)
            if(!(str[i] >= '0' && str[i] <= '9')) chk = false;
    }

    if(chk) cout << "Correct\n";
    else cout << "Incorrect\n";
}

