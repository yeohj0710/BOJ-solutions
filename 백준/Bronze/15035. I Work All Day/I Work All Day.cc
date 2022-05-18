#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int H; cin >> H;

    int Min = INT_MAX, ans;
    for(int i=0; i<N; i++)
        if(H % v[i] < Min) {
            Min = H % v[i];
            ans = v[i];
        }

    cout << ans << "\n";
}
