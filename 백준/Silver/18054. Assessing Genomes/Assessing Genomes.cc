#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N*2; i++) {
        string str; cin >> str;

        for(int j=1; j<=str.length(); j++) {
            if(str.length() % j != 0) continue;

            bool check = true;

            for(int k=0; k<str.length(); k+=j) {
                if(str.substr(0, j) != str.substr(k, j)) {
                    check = false;
                    break;
                }
            }

            if(check) {
                if(i < N) v[i] = j;
                else u[i-N] = j;
                break;
            }
        }
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int ans = 0;

    for(int i=0; i<N; i++) ans += (v[i] - u[i]) * (v[i] - u[i]);

    cout << ans << "\n";;
}
