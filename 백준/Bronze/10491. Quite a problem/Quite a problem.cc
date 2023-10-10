#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str;

    while(getline(cin, str)) {
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

        bool chk = false;

        for(int i=6; i<str.length(); i++)
            if(str.substr(i-6, 7) == "problem") chk = true;

        if(chk) cout << "yes\n";
        else cout << "no\n";
    }
}
