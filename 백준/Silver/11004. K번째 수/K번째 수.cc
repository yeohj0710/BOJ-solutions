#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    cout << arr[K-1];
}
