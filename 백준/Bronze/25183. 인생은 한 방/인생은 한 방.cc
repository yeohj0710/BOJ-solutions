#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cnt = 1, ans = 0;
    for(int i=0; i<str.length()-1; i++) {
        if(abs(str[i] - str[i+1]) == 1) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);

    if(ans >= 5) cout << "YES\n";
    else cout << "NO\n";
}

