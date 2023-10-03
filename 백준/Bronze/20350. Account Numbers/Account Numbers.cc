#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    str = str.substr(4, str.length() - 4) + str.substr(0, 4);

    string num = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') num += str[i];
        else num += to_string(str[i] - 'A' + 10);
    }

    int val = 0;

    for(int i=0; i<num.length(); i++)
        val = (val * 10 + num[i] - '0') % 97;

    if(val == 1) cout << "correct\n";
    else cout << "incorrect\n"; 
}
