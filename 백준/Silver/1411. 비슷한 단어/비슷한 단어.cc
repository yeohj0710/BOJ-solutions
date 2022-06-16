#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            map<char, char> m;
            bool check = true;

            for(int k=0; k<v[0].length(); k++) {
                if(m[v[i][k]] != NULL && m[v[i][k]] != v[j][k]) check = false;
                else if(m[v[i][k]] == NULL) m[v[i][k]] = v[j][k];
            }

            m.clear();
            for(int k=0; k<v[0].length(); k++) {
                if(m[v[j][k]] != NULL && m[v[j][k]] != v[i][k]) check = false;
                else if(m[v[j][k]] == NULL) m[v[j][k]] = v[i][k];
            }

            if(check) ans++;
        }

    cout << ans << "\n";
}
