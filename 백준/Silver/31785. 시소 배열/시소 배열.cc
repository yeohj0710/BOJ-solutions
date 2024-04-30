#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int i = 0, j = 0;

    vector<int> v(5e5 + 1);

    while(N--) {
        int a; cin >> a;

        if(a == 1) {
            int b; cin >> b;

            j += 1;

            v[j] = v[j-1] + b;
        }
        else {
            int k = (i + j) / 2;

            int l = v[k] - v[i];
            int r = v[j] - v[k];

            if(l <= r) {
                cout << l << "\n";

                i = k;
            }
            else {
                cout << r << "\n";

                j = k;
            }
        }
    }

    for(int k=i+1; k<=j; k++)
        cout << v[k] - v[k-1] << " ";

    cout << "\n";
}
