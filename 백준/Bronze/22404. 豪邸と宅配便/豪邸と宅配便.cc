#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, T; cin >> N >> M >> T;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<bool> u(T+1, true);
    for(int i=v[0]; i>v[0]-M; i--) u[i] = false;
    for(int i=v[N-1]; i<=min(v[N-1]+M, T); i++) u[i] = false;

    for(int i=0; i<N-1; i++) {
        if(M*2 >= v[i+1] - v[i]) for(int j=v[i]; j<=v[i+1]; j++) u[j] = false;
        else {
            for(int j=v[i]; j<v[i]+M; j++) u[j] = false;
            for(int j=v[i+1]-M; j<=v[i+1]; j++) u[j] = false;
        }
    }

    int ans = 0;
    for(int i=1; i<=T; i++)
        if(u[i]) ans++;

    cout << ans << "\n";
}
