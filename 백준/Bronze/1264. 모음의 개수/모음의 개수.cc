#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v = "AEIOUaeiou";

    while(true) {
        string str; getline(cin, str);
        if(str == "#") break;

        int ans = 0;
        for(int i=0; i<str.length(); i++)
            for(int j=0; j<v.length(); j++)
                if(str[i] == v[j]) ans++;

        cout << ans << "\n";
    }
}
