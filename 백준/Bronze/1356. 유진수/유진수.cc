#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    bool check = false;

    for(int i=0; i<str.length()-1; i++) {
        int a = 1, b = 1;

        for(int j=0; j<=i; j++) a *= str[j] - '0';
        for(int j=i+1; j<str.length(); j++) b *= str[j] - '0';

        if(a == b) check = true;
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
