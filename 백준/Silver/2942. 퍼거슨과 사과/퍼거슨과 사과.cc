#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int x = __gcd(a, b);

    vector<int> v;

    for(int i=1; i*i<=x; i++) {
        if(x % i == 0) {
            if(i*i == x) v.push_back(i);
            else {
                v.push_back(i);
                v.push_back(x/i);
            }
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " " << a/v[i] << " " << b/v[i] << "\n";
}
