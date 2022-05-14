#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        int cnt[26] = {};
        bool check = true;

        for(int i=0; i<str.length(); i++) {
            cnt[str[i] - 'A']++;

            if(str[i] > 'A' - 1 + K) check = false;
        }

        if(!check) continue;

        check = true;
        for(int i=0; i<K; i++)
            if(cnt[i] >= 2) check = false;

        if(!check) continue;

        ans++;
    }

    cout << ans << "\n";
}
