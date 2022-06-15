#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int cnt = 0;
    vector<int> ans(N);
    bool check = false;

    while(true) {
        for(int i=0; i<N; i++) {
            if(v[i] > 0) {
                v[i]--;
                cnt++;

                if(v[i] == 0) ans[i] = cnt;
            }

            if(cnt == sum) {
                check = true;
                break;
            }
        }

        if(check) break;
    }

    for(int i=0; i<N; i++) cout << ans[i] << " ";
    cout << "\n";
}
