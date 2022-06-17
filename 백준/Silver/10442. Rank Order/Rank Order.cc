#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    int t = 1;

    while(cin >> N) {
        cout << "Case " << t << ": ";

        vector<pair<int, int>> v(N), u(N);
        for(int i=0; i<N; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }
        for(int i=0; i<N; i++) {
            cin >> u[i].first;
            u[i].second = i;
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        sort(u.begin(), u.end(), greater<pair<int, int>>());

        bool check = false;
        for(int i=0; i<N; i++)
            if(v[i].second != u[i].second) {
                cout << i+1 << "\n";
                check = true;
                break;
            }

        if(!check) cout << "agree\n";

        t++;
    }
}
