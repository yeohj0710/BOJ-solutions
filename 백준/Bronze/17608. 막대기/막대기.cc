#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> stick(N);
    for(int i=0; i<N; i++) cin >> stick[i];

    int ans = 0, Max = 0;
    for(int i=N-1; i>=0; i--)
        if(stick[i] > Max) {
            ans++;
            Max = stick[i];
        }

    cout << ans;
}
