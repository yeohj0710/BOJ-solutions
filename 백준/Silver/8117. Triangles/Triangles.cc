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

    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++)
            for(int k=j+1; k<v.size(); k++)
                if(v[i] + v[j] > v[k]) {
                    cout << v[i] << " " << v[j] << " " << v[k] << "\n";
                    return 0;
                }

    cout << "NIE\n";
}
