#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<int> v;
    int x = 1;

    while(x <= 5e9) {
        v.push_back(x);

        int tmp = x, sum = 0;

        while(tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        x += sum * sum;
    }

    int N; cin >> N;

    while(N--) {
        cin >> x;

        if(binary_search(v.begin(), v.end(), x)) cout << "TAK\n";
        else cout << "NIE\n";
    }
}
