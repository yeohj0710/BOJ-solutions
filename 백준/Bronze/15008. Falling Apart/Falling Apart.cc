#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int a = 0, b = 0;
    for(int i=0; i<N; i++) {
        if(i % 2 == 0) a += v[i];
        else b += v[i];
    }

    cout << a << " " << b << "\n";
}
