#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<26; i++) {
        string temp = str;

        for(int j=0; j<temp.length(); j++)
            temp[j] = char((temp[j] - 'a' + i) % 26 + 'a');

        bool check = true;
        for(int j=0; j<temp.length(); j++)
            if(temp[j] == 'i') check = false;

        if(check) ans++;
    }

    if(ans != 0) cout << ans << "\n";
    else cout << "impossible\n";
}
