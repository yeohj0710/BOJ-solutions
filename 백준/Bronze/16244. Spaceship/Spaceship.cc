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

    int x;
    for(int i=0; i<N; i++)
        if(sum - v[i] == v[i]) x = i;

    for(int i=0; i<N; i++)
        if(i != x) cout << v[i] << " ";

    cout << v[x] << "\n";
}
