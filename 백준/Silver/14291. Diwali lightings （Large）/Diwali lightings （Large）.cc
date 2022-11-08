#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        int N = str.length();

        int cnt = 0;

        for(int i=0; i<N; i++)
            if(str[i] == 'B') cnt++;

        int a, b; cin >> a >> b;

        int x = (a - 1) / N * cnt;

        for(int i=0; i<(a-1)%N; i++)
            if(str[i] == 'B') x++;

        int y = b / N * cnt;

        for(int i=0; i<b%N; i++)
            if(str[i] == 'B') y++;

        int ans = y - x;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
