#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    vector<bool> v(5);

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'M') v[0] = true;
        else if(str[i] == 'O') v[1] = true;
        else if(str[i] == 'B') v[2] = true;
        else if(str[i] == 'I') v[3] = true;
        else if(str[i] == 'S') v[4] = true;
    }

    bool check = true;

    for(int i=0; i<5; i++)
        if(!v[i]) check = false;

    cout << (check ? "YES" : "NO") << "\n";
}
