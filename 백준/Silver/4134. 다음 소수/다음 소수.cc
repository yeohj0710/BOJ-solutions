#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> p(63246, true);
    p[1] = false;

    for(int i=2; i*i<63246; i++)
        for(int j=2; i*j<63246; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<63246; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N == 0 || N == 1) {
            cout << 2 << "\n";
            continue;
        }

        for(int i=N; ; i++) {
            bool check = true;

            for(int j=0; j<v.size() && v[j]*v[j] <= i; j++) {
                if(i % v[j] == 0) {
                    check = false;
                    break;
                }
            }

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
