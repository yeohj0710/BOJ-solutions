#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;

    for(int i=0; i<(1<<N); i++) {
        int x = i;
        string str = "";

        for(int j=0; j<N; j++) {
            str = char('0' + x % 2) + str;

            x /= 2;
        }

        bool check = true;
        int cnt = 1;

        for(int j=1; j<str.length(); j++) {
            if(str[j] == str[j-1]) cnt++;
            else {
                if(cnt > M) check = false;
                cnt = 1;
            }
        }
        if(cnt > M) check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
