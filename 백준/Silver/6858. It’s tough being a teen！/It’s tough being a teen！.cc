#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<pair<int, int>> v;

    v.push_back({1, 7});
    v.push_back({1, 4});
    v.push_back({2, 1});
    v.push_back({3, 4});
    v.push_back({3, 5});

    while(true) {
        int a, b; cin >> a >> b;

        if(a == 0 && b == 0) break;

        v.push_back({a, b});
    }

    vector<int> u(7);
    for(int i=0; i<7; i++) u[i] = i+1;

    while(true) {
        vector<int> w(8);
        for(int i=0; i<7; i++) w[u[i]] = i;

        bool check = true;

        for(int i=0; i<v.size(); i++)
            if(w[v[i].first] > w[v[i].second]) check = false;

        if(check) {
            for(int i=0; i<u.size(); i++) cout << u[i] << " ";
            cout << "\n";

            return 0;
        }

        if(!next_permutation(u.begin(), u.end())) break;
    }

    cout << "Cannot complete these tasks. Going to bed.\n";
}
