#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int pos = 0, ans;
    for(int i=1; i<=N; i++) {
        string temp = to_string(i);

        if(pos + temp.length() > str.length() || str.substr(pos, temp.length()) != temp) {
            ans = i;
            break;
        }

        pos += temp.length();
    }

    cout << ans << "\n";
}
