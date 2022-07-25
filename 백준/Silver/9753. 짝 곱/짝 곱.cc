#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(50022, true);
    prime[1] = false;
    for(int i=2; i*i<=50021; i++)
        for(int j=2; i*j<=50021; j++) prime[i*j] = false;

    vector<int> v;
    for(int i=2; i<=50021; i++)
        if(prime[i]) v.push_back(i);

    vector<int> u;
    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++) {
            if(v[i] * v[j] > 100042) break;
            u.push_back(v[i]*v[j]);
        }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << u[lower_bound(u.begin(), u.end(), x) - u.begin()] << "\n";
    }
}
