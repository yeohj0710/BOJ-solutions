#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sum /= 2;

    for(int i=0; i<N; i++) {
        int x = 0;
        for(int j=i+1; j<i+N; j+=2) x += v[j % N];

        cout << sum - x << "\n";
    }
}
