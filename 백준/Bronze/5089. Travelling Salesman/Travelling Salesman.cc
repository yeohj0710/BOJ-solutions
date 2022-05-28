#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;
        cin.ignore();

        vector<string> v(N);
        for(int i=0; i<N; i++) getline(cin, v[i]);

        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        cout << "Week " << t << " " << v.size() << "\n";
    }
}
