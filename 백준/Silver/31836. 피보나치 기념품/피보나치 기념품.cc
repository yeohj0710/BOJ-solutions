#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v, u;

    for(int i=N; i>=3; i-=3) {
        v.push_back(i);
        u.push_back(i-1);
        u.push_back(i-2);
    }

    if(N % 3 == 2) {
        v.push_back(2);
        u.push_back(1);
    }

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
