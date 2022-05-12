#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(arr[i] + arr[j] == M) ans++;

    cout << ans << "\n";
}
