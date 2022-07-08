#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(9);

    for(int i=0; i<9; i++) cin >> v[i];

    int Max = 0;
    for(int i=0; i<9; i++) Max = max(Max, v[i]);

    for(int i=0; i<9; i++)
        if(v[i] == Max) {
            cout << v[i] << "\n";
            cout << i+1 << "\n";
        }
}
