#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        vector<double> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;

        sort(v.begin(), v.end(), greater<double>());

        if(v[0] >= 125 && v[0] <= 290 && v[1] >= 90
           && v[1] <= 155 && v[2] >= 0.25 && v[2] <= 7) cout << "letter\n";
        else if(v[0] >= 125 && v[1] >= 90 && v[2] >= 0.25
                && v[0] <= 380 && v[1] <= 300 && v[2] <= 50) cout << "packet\n";
        else if(v[0] >= 125 && v[1] >= 90 && v[2] >= 0.25
                && v[0] + (v[1] + v[2])*2 <= 2100) cout << "parcel\n";
        else cout << "not mailable\n";
    }
}
