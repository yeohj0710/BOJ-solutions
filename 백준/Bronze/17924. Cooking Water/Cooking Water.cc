#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    for(int i=0; i<=1000; i++) {
        bool check = true;

        for(int j=0; j<N; j++)
            if(i < v[j].first || i > v[j].second) check = false;

        if(check) {
            cout << "gunilla has a point\n";
            return 0;
        }
    }

    cout << "edward is right\n";
}
