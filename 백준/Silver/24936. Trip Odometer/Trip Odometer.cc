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

    vector<int> u;
    for(int i=0; i<N; i++) u.push_back(sum - v[i]);

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    cout << u.size() << "\n";
    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
