#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int sum = 0;
    for(int i=0; i<N-1; i++) sum += arr[i];

    cout << sum << "\n";
}
