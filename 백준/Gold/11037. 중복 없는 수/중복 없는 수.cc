#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v;

    for(int i=1; i<(1<<9); i++) {
        bitset<10> b(i);

        vector<int> u;

        for(int j=0; j<b.size(); j++)
            if(b[j] == 1) u.push_back(j+1);

        sort(u.begin(), u.end());

        while(true) {
            int x = 0;

            for(int j=0; j<u.size(); j++) x = x * 10 + u[j];

            v.push_back(x);

            if(!next_permutation(u.begin(), u.end())) break;
        }
    }

    sort(v.begin(), v.end());

    int N;

    while(cin >> N) {
        int idx = upper_bound(v.begin(), v.end(), N) - v.begin();

        if(idx < v.size()) cout << v[idx] << "\n";
        else cout << 0 << "\n";
    }
}
