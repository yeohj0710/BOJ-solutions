#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(1000);
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v[x]++;
    }

    vector<int> u;
    for(int i=1; i<=999; i++) {
        if(v[i] == 1) u.push_back(i);
        else if(v[i] >= 2) {
            u.push_back(i);
            u.push_back(i);
        }
    }

    int ans = 0;

    for(int i=0; i<u.size(); i++)
        for(int j=i+1; j<u.size(); j++) {
            int tmp = u[i] * u[j];

            int sum = 0;

            while(tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }

            ans = max(ans, sum);
        }

    cout << ans << "\n";
}
