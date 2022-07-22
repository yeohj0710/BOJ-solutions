#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(10000001, true);
    prime[1] = false;
    for(int i=2; i*i<=10000000; i++)
        for(int j=2; i*j<=10000000; j++) prime[i*j] = false;

    vector<int> v;
    for(int i=2; i<=10000000; i++)
        if(prime[i]) v.push_back(i);

    int a, b;

    while(cin >> a >> b) {
        int l = 0, r = v.size()-1, x = v.size()-1;

        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] >= a) {
                x = min(x, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        l = 0, r = v.size()-1;
        int y = 0;

        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] <= b) {
                y = max(y, m);
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << y - x + 1 << "\n";
        cout << "\n";
    }
}
