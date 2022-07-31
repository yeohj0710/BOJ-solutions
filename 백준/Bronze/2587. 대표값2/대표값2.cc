#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(5);

    int avg = 0;

    for(int i=0; i<5; i++) {
        cin >> v[i];
        avg += v[i];
    }

    avg /= 5;

    sort(v.begin(), v.end());

    cout << avg << "\n" << v[2] << "\n";
}
