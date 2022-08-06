#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    vector<int> v;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i == 0) continue;

        x--;

        bool check = false;

        for(int j=0; j<v.size(); j++)
            if(x % v[j] == 0) check = true;

        if(!check) {
            v.push_back(x);
            ans++;
        }
    }

    cout << ans << "\n";
}
