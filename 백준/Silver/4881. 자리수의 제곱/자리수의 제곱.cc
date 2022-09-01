#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int x[2]; cin >> x[0] >> x[1];
        if(x[0] == 0 && x[1] == 0) break;

        vector<vector<int>> v(2);

        for(int i=0; i<2; i++) {
            int val = x[i];

            while(true) {
                v[i].push_back(val);

                int tmp = 0;

                while(val > 0) {
                    tmp += pow(val % 10, 2);
                    val /= 10;
                }

                bool check = false;

                for(int j=0; j<v[i].size(); j++)
                    if(v[i][j] == tmp) check = true;

                if(check) break;

                val = tmp;
            }
        }

        int ans = INT_MAX;

        for(int i=0; i<v[0].size(); i++)
            for(int j=0; j<v[1].size(); j++)
                if(v[0][i] == v[1][j]) ans = min(ans, (i+1) + (j+1));

        cout << x[0] << " " << x[1] << " ";

        if(ans != INT_MAX) cout << ans << "\n";
        else cout << 0 << "\n";

    }
}
