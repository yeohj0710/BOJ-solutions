#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    int v[4]; cin >> v[0] >> v[1] >> v[2] >> v[3];

    int u[4] = {};
    for(int i=0; i<M; i++) {
        if(str[i] == 'A') u[0]++;
        else if(str[i] == 'C') u[1]++;
        else if(str[i] == 'G') u[2]++;
        else if(str[i] == 'T') u[3]++;
    }

    int ans = 0;
    if(u[0] >= v[0] && u[1] >= v[1] && u[2] >= v[2] && u[3] >= v[3]) ans++;

    for(int i=0; i<N-M; i++) {
        if(str[i] == 'A') u[0]--;
        else if(str[i] == 'C') u[1]--;
        else if(str[i] == 'G') u[2]--;
        else if(str[i] == 'T') u[3]--;

        if(str[i+M] == 'A') u[0]++;
        else if(str[i+M] == 'C') u[1]++;
        else if(str[i+M] == 'G') u[2]++;
        else if(str[i+M] == 'T') u[3]++;

        if(u[0] >= v[0] && u[1] >= v[1] && u[2] >= v[2] && u[3] >= v[3]) ans++;
    }

    cout << ans << "\n";
}
