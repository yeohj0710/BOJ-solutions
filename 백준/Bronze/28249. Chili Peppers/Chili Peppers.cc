#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero"};
    vector<int> u = {1500, 6000, 15500, 40000, 75000, 125000};

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        for(int i=0; i<v.size(); i++)
            if(str == v[i]) ans += u[i];
    }

    cout << ans << "\n";
}
