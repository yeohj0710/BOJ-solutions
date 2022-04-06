#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<long long> rope(N);
    for(int i=0; i<N; i++) cin >> rope[i];
    sort(rope.begin(), rope.end(), greater<long long>());

    long long ans = 0;
    for(int i=0; i<N; i++)
        ans = max(ans, rope[i] * (i+1));

    cout << ans;
}
