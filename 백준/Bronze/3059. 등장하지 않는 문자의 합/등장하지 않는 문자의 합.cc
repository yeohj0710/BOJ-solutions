#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        bool check[26] = {};
        for(int i=0; i<str.length(); i++) check[str[i] - 'A'] = true;

        int ans = 0;
        for(int i=0; i<26; i++)
            if(!check[i]) ans += 'A' + i;

        cout << ans << "\n";
    }
}
