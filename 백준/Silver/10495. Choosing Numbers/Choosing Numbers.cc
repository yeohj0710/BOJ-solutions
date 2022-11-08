#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        bool flag = false;

        for(int i=0; i<N; i++) {
            bool check = true;

            for(int j=0; j<N; j++) {
                if(i == j) continue;

                if(__gcd(v[i], v[j]) > 1) check = false;
            }

            if(check) {
                cout << v[i] << "\n";

                flag = true;
                break;
            }
        }

        if(!flag) cout << v[0] << "\n";
    }
}
