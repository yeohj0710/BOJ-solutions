#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;

    while(cin >> N >> M) {
        int ans = 0;

        for(int i=N; i<=M; i++) {
            string str = to_string(i);

            int cnt[10] = {};
            for(int j=0; j<str.length(); j++) cnt[str[j] - '0']++;

            bool check = true;
            for(int j=0; j<10; j++)
                if(cnt[j] >= 2) check = false;

            if(check) ans++;
        }

        cout << ans << "\n";
    }
}
