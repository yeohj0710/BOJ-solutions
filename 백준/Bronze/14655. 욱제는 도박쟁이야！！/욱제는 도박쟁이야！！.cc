#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int sum1 = 0;
    for(int i=0; i<N; i++) sum1 += abs(arr[i]);

    for(int i=0; i<N; i++) cin >> arr[i];

    int sum2 = 0;
    for(int i=0; i<N; i++) sum2 += -abs(arr[i]);

    cout << sum1 - sum2 << "\n";
}
