#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    int ans = 0;
    for(int i=0; i<N; i+=3) {
        if(i+1 == N) ans += arr[i];
        else if(i+2 == N) ans += arr[i] + arr[i+1];
        else ans += arr[i] + arr[i+1];
    }

    cout << ans << "\n";
}
