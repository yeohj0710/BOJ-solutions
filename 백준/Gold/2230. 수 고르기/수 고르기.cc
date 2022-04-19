#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int i = 0, j = 0, min_diff = INT_MAX;
    while(j < N) {
        int diff = arr[j] - arr[i];

        if(diff >= M) {
            min_diff = min(min_diff, diff);
            i++;

            if(i > j) j = i;
        }
        else j++;
    }

    cout << min_diff << "\n";
}
