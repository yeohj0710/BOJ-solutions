#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    string a = "aeios";
    string b = "43105";

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<a.length(); j++)
            if(str[i] == a[j]) str[i] = b[j];

    cout << str << "\n";
}
