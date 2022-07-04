#include <bits/stdc++.h>
#define int long long
using namespace std;

bool prime[4000001] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i<=4000000; i++) prime[i] = true;
    for(int i=2; i*i<=4000000; i++)
        for(int j=2; i*j<=4000000; j++) prime[i*j] = false;

    vector<int> v;
    for(int i=2; i<=4000000; i++)
        if(prime[i]) v.push_back(i);

    vector<int> u(v.size() + 1);
    for(int i=1; i<=v.size(); i++) u[i] = u[i-1] + v[i-1];

    int N; cin >> N;

    int i = 1, j = 1, ans = 0;
    while(j <= u.size()) {
        int sum = u[j] - u[i-1];

        if(sum == N) ans++;

        if(sum >= N) {
            i++;
            if(i > j) j = i;
        }
        else j++;
    }

    cout << ans << "\n";
}
