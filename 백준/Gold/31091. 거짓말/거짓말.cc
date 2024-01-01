#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(5e5 + 1), u(5e5 + 1);

    while(N--) {
        int x; cin >> x;

        if(x > 0) v[x]++;
        else u[-x]++;
    }

    for(int i=5e5-1; i>=0; i--) v[i] += v[i+1];
    for(int i=1; i<=5e5; i++) u[i] += u[i-1];

    vector<int> w;

    for(int i=0; i<=5e5; i++) {
        int sum = 0;

        if(i < 5e5) sum += v[i+1];
        if(i > 0) sum += u[i-1];

        if(sum == i) w.push_back(i);
    }

    cout << w.size() << "\n";

    for(int i=0; i<w.size(); i++) cout << w[i] << " ";
    cout << "\n";
}
