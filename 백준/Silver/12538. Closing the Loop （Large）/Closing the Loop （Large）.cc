#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        vector<int> v, u;

        while(N--) {
            string str; cin >> str;

            if(str.back() == 'R') v.push_back(stoi(str.substr(0, str.length()-1)));
            else u.push_back(stoi(str.substr(0, str.length()-1)));
        }

        sort(v.begin(), v.end(), greater<int>());
        sort(u.begin(), u.end(), greater<int>());

        int ans = 0;
        for(int i=0; i<min(v.size(), u.size()); i++) {
            ans += v[i] + u[i] - 2;
        }

        cout << ans << "\n";
    }
}
