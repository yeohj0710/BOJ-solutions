#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N); int avg = 0;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= N;

    int ans = 0;
    for(int i=0; i<N; i++) ans += abs(arr[i] - avg);
    cout << ans/2;
}
