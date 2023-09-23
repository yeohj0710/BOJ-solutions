#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int M, N; cin >> M >> N;

    vector<int> v = {4, 11, 23, 40, 60, 77, 89, 96, 100};

    while(N--) {
        int x; cin >> x;

        int y = x * 100 / M;

        for(int i=0; i<v.size(); i++)
            if(y <= v[i]) {
                cout << i + 1 << " ";
                break;
            }
    }
    cout << "\n";
}

