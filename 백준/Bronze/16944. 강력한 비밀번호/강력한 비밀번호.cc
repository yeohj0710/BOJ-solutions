#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    int cnt = 0;

    bool check = false;
    for(int i=0; i<str.length(); i++)
        if(str[i] >= '0' && str[i] <= '9') check = true;
    if(!check) cnt++;

    check = false;
    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'a' && str[i] <= 'z') check = true;
    if(!check) cnt++;

    check = false;
    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'A' && str[i] <= 'Z') check = true;
    if(!check) cnt++;

    check = false;
    string s = "!@#$%^&*()-+";
    for(int i=0; i<str.length(); i++)
        for(int j=0; j<s.length(); j++)
            if(str[i] == s[j]) check = true;
    if(!check) cnt++;

    int ans = max(6 - (int)str.length(), (int)cnt);

    cout << ans << "\n";
}
