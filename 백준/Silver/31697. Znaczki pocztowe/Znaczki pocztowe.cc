#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v;
    unordered_map<int, int> m;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(m[x] == 0) v.push_back(x);

        m[x]++;
    }

    vector<int> u;

    for(int i=0; i<v.size(); i++) u.push_back(m[v[i]]);

    sort(u.begin(), u.end(), greater<int>());

    for(int i=1; i<=N; i++) {
        int sum = 0;

        for(int j=0; j<u.size(); j++) {
            if(u[j] < i) break;

            sum += (u[j] / i) * i;
        }

        cout << sum << " ";
    }
    cout << "\n";
}
