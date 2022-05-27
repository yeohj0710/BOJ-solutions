#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(str[i] != str[str.length()-1-i]) check = false;

        if(check) ans += stoll(str);
    }

    cout << ans << "\n";
}
