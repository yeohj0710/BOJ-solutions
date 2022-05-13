#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int cnt = 0;

    for(int i=0; i<4; i++)
        if(a[i] != b[i]) cnt++;

    cout << (int)pow(2, cnt) << "\n";
}
