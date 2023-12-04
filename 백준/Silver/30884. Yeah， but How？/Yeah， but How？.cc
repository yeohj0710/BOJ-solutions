#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    cout << str[0];

    for(int i=1; i<str.length(); i++) {
        if(str[i-1] == '(' && str[i] == ')') cout << 1;
        else if(str[i-1] == ')' && str[i] == '(') cout << '+';

        cout << str[i];
    }
    cout << "\n";
}
