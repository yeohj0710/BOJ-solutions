#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        string str; cin >> str;

        vector<int> v(N);
        for(int i=0; i<N; i++) v[i] = i;

        int ans = INT_MAX;

        while(true) {
            string tmp = str;

            for(int i=0; i<tmp.length(); i+=N)
                for(int j=0; j<N; j++)
                    tmp[i + j] = str[i + v[j]];

            int cnt = 1;

            for(int i=1; i<tmp.length(); i++)
                if(tmp[i] != tmp[i-1]) cnt++;

            ans = min(ans, cnt);

            if(!next_permutation(v.begin(), v.end())) break;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
