#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[31] = {1, 1};
    for(int i=2; i<=30; i++)
        for(int j=0; j<i; j++) v[i] += v[j] * v[i-1-j];

    int a, b; cin >> a >> b;

    cout << v[abs(a-b)] << "\n";
}
