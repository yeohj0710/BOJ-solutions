#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<long long> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    if(arr[2] - arr[1] == arr[1] - arr[0])
        cout << arr[N-1] + (arr[N-1] - arr[N-2]) << "\n";
    else cout << arr[N-1] * (arr[N-1] / arr[N-2]) << "\n";
}
