#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(str.length());

    string vow = "aeiou";

    for(int i=0; i<str.length(); i++) {
        bool check = false;

        for(int j=0; j<vow.length(); j++)
            if(str[i] == vow[j]) check = true;

        if(check) v[i] = 1;
    }

    bool check = true;

    for(int i=1; i<v.size(); i++)
        if(v[i] == v[i-1]) check = false;

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
