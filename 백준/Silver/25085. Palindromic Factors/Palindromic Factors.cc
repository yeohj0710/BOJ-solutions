#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        int ans = 0;

        for(int i=1; i*i<=N; i++) {
            if(N % i != 0) continue;

            string str = to_string(i);
            bool check = true;

            for(int j=0; j<str.length(); j++)
                if(str[j] != str[str.length()-j-1]) check = false;

            if(check) ans++;

            if(i*i == N) continue;

            str = to_string(N/i);
            check = true;

            for(int j=0; j<str.length(); j++)
                if(str[j] != str[str.length()-j-1]) check = false;

            if(check) ans++;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
