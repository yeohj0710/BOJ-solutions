#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v;

    while(true) {
        int x; cin >> x;
        if(x == 0) break;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-2; i++)
        if(v[i] + v[i+1] > v[i+2]) {
            cout << v[i] << " " << v[i+1] << " " << v[i+2] << "\n";
            return 0;
        }

    cout << "NIE\n";
}
