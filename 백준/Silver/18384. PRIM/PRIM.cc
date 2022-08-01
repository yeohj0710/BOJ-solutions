#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> p(1e5, true);
    p[1] = false;

    for(int i=2; i*i<1e5; i++)
        for(int j=2; i*j<1e5; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<1e5; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int ans = 0;

        for(int k=0; k<5; k++) {
            int x; cin >> x;

            for(int i=x; ; i++) {
                bool check = true;

                for(int j=0; j<v.size() && v[j]*v[j] <= i; j++) {
                    if(i % v[j] == 0) {
                        check = false;
                        break;
                    }
                }

                if(i == 1) check = false;

                if(check) {
                    ans += i;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
}
