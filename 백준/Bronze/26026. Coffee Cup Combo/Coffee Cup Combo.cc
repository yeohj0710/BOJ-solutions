#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '1') ans++;
        else {
            if(i > 0 && str[i-1] == '1') ans++;
            else if(i > 1 && str[i-2] == '1') ans++;
        }
    }

    cout << ans << "\n";
}
