#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(26);

    string str;

    while(cin >> str) {
        bool chk = false;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '@') {
                chk = true;
                break;
            }
            else if(str[i] >= 'a' && str[i] <= 'z') v[str[i] - 'a']++;
            else if(str[i] >= 'A' && str[i] <= 'Z') v[str[i] - 'A']++;
        }

        if(chk) break;
    }

    int mx = 0;

    for(int i=0; i<26; i++) mx = max(mx, v[i]);

    for(int i=0; i<mx; i++) {
        for(int j=0; j<26; j++) {
            if(mx - i <= v[j]) cout << char('A' + j);
            else cout << " ";
        }

        cout << "\n";
    }

    for(int i=0; i<26; i++) cout << "-";
    cout << "\n";

    for(int i=0; i<26; i++) cout << char('A' + i);
    cout << "\n";
}
