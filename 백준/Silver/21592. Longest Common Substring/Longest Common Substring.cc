#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<v[0].length(); i++)
        for(int j=i; j<v[0].length(); j++) {
            string tmp = v[0].substr(i, j-i+1);

            bool check = true;

            for(int k=1; k<N; k++)
                if(v[k].find(tmp) >= v[k].length()) check = false;

            if(check) ans = max(ans, j-i+1);
        }

    cout << ans << "\n";
}
