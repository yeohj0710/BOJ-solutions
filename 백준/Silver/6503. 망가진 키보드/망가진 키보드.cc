#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;
        cin.ignore();

        string str; getline(cin, str);

        map<char, int> m;
        int cnt = 0;

        int i = 0, j = 0, ans = 0;

        while(j < str.length()) {
            if(m[str[j]] == 0) {
                m[str[j]]++;
                cnt++;

                while(cnt > N) {
                    m[str[i]]--;

                    if(m[str[i]] == 0) cnt--;

                    i++;
                }
            }
            else m[str[j]]++;

            ans = max(ans, j-i+1);
            j++;
        }

        cout << ans << "\n";
    }
}
