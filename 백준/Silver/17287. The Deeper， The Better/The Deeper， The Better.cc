#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0, cur = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') ans = max(ans, cur);
        else if(str[i] == '(') cur++;
        else if(str[i] == ')') cur--;
        else if(str[i] == '{') cur += 2;
        else if(str[i] == '}') cur -= 2;
        else if(str[i] == '[') cur += 3;
        else if(str[i] == ']') cur -= 3;
    }

    cout << ans << "\n";
}
