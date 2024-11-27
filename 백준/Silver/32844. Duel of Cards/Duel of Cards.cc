#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n), u;
    vector<bool> w(n*2 + 1);

    for(int i=0; i<n; i++) {
        cin >> v[i];

        w[v[i]] = true;
    }

    for(int i=1; i<=n*2; i++)
        if(!w[i]) u.push_back(i);

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0, cnt = 0;

    while(i < v.size() && j < u.size()) {
        if(v[i] < u[j]) {
            cnt++;
            i++, j++;
        }
        else j++;
    }

    cnt = n - cnt;

    cout << cnt << " ";

    i = 0, j = 0, cnt = 0;

    while(i < v.size() && j < u.size()) {
        if(v[i] > u[j]) {
            cnt++;
            i++, j++;
        }
        else i++;
    }

    cout << cnt << "\n";
}
