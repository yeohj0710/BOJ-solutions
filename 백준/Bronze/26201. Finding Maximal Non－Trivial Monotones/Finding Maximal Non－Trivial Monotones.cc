#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0, cnt = 1;

    for(int i=1; i<N; i++) {
        if(str[i] == str[i-1]) cnt++;
        else {
            if(str[i-1] == 'a' && cnt >= 2) ans += cnt;

            cnt = 1;
        }
    }
    if(str[N-1] == 'a' && cnt >= 2) ans += cnt;

    cout << ans << "\n";
}
