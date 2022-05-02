#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);

    for(int i=0; i<N; i++) {
        vector<int> arr2(N);

        for(int j=0; j<N; j++) cin >> arr2[j];

        sort(arr2.begin(), arr2.end());

        arr[i] = arr2[N/2];
    }

    sort(arr.begin(), arr.end());

    cout << arr[N/2] << "\n";
}
