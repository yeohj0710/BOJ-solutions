#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cnt = 0, ans = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == 'Z') cnt++;
        else {
            if(cnt > 0) ans += (cnt - 1)/3 + 1;
            cnt = 0;
        }
    }
    if(cnt > 0) ans += (cnt - 1)/3 + 1;

    cout << ans << "\n";
}
