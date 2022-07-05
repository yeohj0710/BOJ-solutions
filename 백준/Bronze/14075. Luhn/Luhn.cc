#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(16);
    for(int i=0; i<16; i++) v[i] = str[i] - '0';

    for(int i=0; i<16; i+=2) {
        v[i] *= 2;

        if(v[i] >= 10) {
            v[i] = v[i]/10 + v[i]%10;
        }
    }

    int sum = 0;
    for(int i=0; i<16; i++) sum += v[i];

    if(sum % 10 == 0) cout << "DA\n";
    else cout << "NE\n";
}
