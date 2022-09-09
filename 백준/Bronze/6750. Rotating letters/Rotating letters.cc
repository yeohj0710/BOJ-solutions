#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string a = "IOSHZXN";
    bool check = true;

    for(int i=0; i<str.length(); i++) {
        bool flag = false;

        for(int j=0; j<a.length(); j++)
            if(str[i] == a[j]) flag = true;

        if(!flag) check = false;
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
