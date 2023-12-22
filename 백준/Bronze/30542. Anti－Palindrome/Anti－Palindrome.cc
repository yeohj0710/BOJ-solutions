#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; getline(cin, str);

    string s = "";

    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'a' && str[i] <= 'z') s += str[i];

    bool chk = false;

    for(int i=1; i<s.length(); i++)
        if(s[i] == s[i-1]) chk = true;

    for(int i=2; i<s.length(); i++)
        if(s[i] == s[i-2]) chk = true;

    if(chk) cout << "Palindrome\n";
    else cout << "Anti-palindrome\n";
}
