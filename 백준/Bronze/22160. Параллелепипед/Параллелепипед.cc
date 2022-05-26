#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        vector<int> v(12);
        for(int i=0; i<12; i++) cin >> v[i];

        bool check = true;
        for(int i=0; i<12; i++)
            if(v[i] != 0) check = false;
        if(check) break;

        sort(v.begin(), v.end());

        if(v[0] == v[1] && v[0] == v[2] && v[0] == v[3]
           && v[4] == v[5] && v[4] == v[6] && v[4] == v[7]
           && v[8] == v[9] && v[8] == v[10] && v[8] == v[11]) cout << "yes\n";
        else cout << "no\n";
    }
}
