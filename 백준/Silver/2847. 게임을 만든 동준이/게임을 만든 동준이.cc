#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int ans = 0;
    for(int i=N-2; i>=0; i--) {
        if(arr[i] < arr[i+1] - 1) continue;

        ans += arr[i] - (arr[i+1] - 1);
        arr[i] = arr[i+1] - 1;
    }

    cout << ans;
}
