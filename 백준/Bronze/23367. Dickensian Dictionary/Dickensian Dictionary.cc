#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string a = "qwertasdfgzxcvb";
    string b = "yuiophjklnm";

    bool check = false;
    for(int i=0; i<a.length(); i++)
        if(str[0] == a[i]) check = true;

    bool ans = true;
    if(check) {
        for(int i=1; i<str.length(); i+=2)
            for(int j=0; j<a.length(); j++)
                if(str[i] == a[j]) ans = false;

        for(int i=0; i<str.length(); i+=2)
            for(int j=0; j<b.length(); j++)
                if(str[i] == b[j]) ans = false;
    }
    else {
        for(int i=0; i<str.length(); i+=2)
            for(int j=0; j<a.length(); j++)
                if(str[i] == a[j]) ans = false;

        for(int i=1; i<str.length(); i+=2)
            for(int j=0; j<b.length(); j++)
                if(str[i] == b[j]) ans = false;
    }

    if(ans) cout << "yes\n";
    else cout << "no\n";
}
