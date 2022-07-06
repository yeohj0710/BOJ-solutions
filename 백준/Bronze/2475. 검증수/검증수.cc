#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(5);
    for(int i=0; i<5; i++) cin >> v[i];

    int sum = 0;
    for(int i=0; i<5; i++) sum += v[i] * v[i];

    cout << sum % 10 << "\n";
}
