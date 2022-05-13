#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int idx;
    for(int i=0; i<str.length(); i++)
        if(str[i] == '(') idx = i;

    if(idx == str.length() - idx - 2) cout << "correct\n";
    else cout << "fix\n";
}
