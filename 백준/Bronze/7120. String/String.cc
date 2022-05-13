#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=1; i<str.length(); i++)
        if(str[i] != str[i-1]) cout << str[i-1];
    cout << str[str.length()-1] << "\n";
}
