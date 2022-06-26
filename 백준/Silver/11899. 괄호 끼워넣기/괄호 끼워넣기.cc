#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    int Min = 0, cnt = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') cnt++;
        else if(str[i] == ')') cnt--;

        Min = min(Min, cnt);
    }
    ans += abs(Min);

    reverse(str.begin(), str.end());

    Min = 0, cnt = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') cnt--;
        else if(str[i] == ')') cnt++;

        Min = min(Min, cnt);
    }
    ans += abs(Min);

    cout << ans << "\n";
}
