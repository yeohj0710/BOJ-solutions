#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    vector<int> sum(N*N);
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) sum[i*N + j] = arr[i] + arr[j];

    sort(sum.begin(), sum.end());

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            int diff = arr[i] - arr[j];
            int cnt = upper_bound(sum.begin(), sum.end(), diff) - lower_bound(sum.begin(), sum.end(), diff);

            if(cnt > 0) {
                cout << arr[i] << "\n";
                return 0;
            }
        }
}
