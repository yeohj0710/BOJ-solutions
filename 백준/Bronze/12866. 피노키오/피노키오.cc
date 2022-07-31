#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    vector<int> v(4);

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'A') v[0]++;
        else if(str[i] == 'T') v[1]++;
        else if(str[i] == 'G') v[2]++;
        else if(str[i] == 'C') v[3]++;
    }

    int ans = 1;

    for(int i=0; i<4; i++) ans = (ans * v[i]) % (int)(1e9 + 7);

    cout << ans << "\n";
}
