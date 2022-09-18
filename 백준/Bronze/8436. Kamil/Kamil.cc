#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int a = 0, b = 0, c = 0, d = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'T') a++;
        else if(str[i] == 'D') b++;
        else if(str[i] == 'L') c++;
        else if(str[i] == 'F') d++;
    }

    int ans = pow(2, a + b + c + d);

    cout << ans << "\n";
}
