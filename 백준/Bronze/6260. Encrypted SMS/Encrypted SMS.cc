#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        string ans = "";

        for(int i=0; i<str.length(); i++) {
            bool check = false;
            if(str[i] >= 'a' && str[i] <= 'z') {
                check = true;
                str[i] = char(str[i] - 'a' + 'A');
            }

            int x, y;
            for(int j=0; j<8; j++)
                for(int k=0; k<v[j].length(); k++)
                    if(str[i] == v[j][k]) x = j, y = k;

            char c = v[x][(y - (i+1) + 3000) % v[x].length()];
            if(check) c = char(c - 'A' + 'a');

            ans += c;
        }

        cout << ans << "\n";
    }
}
