#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(10);
    int sum = 0;

    for(int i=0; i<10; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if(sum % 4 != 0) {
        cout << "NO\n";
        return 0;
    }

    vector<int> u(5);
    sum /= 4;

    u[0] = sum - v[4] - v[9];
    u[1] = sum - v[1] - v[9];
    u[2] = sum - v[0] - v[9];
    u[3] = sum - v[0] - v[8];
    u[4] = sum - v[0] - v[7];

    for(int i=0; i<5; i++)
        if(u[i] < 0) {
            cout << "NO\n";
            return 0;
        }

    if(u[0] + u[1] + u[2] + u[3] + u[4] != sum) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
}
