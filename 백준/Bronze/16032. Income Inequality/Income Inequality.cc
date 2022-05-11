#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> arr(N);

        double avg = 0;
        for(int i=0; i<N; i++) {
            cin >> arr[i];

            avg += arr[i];
        }

        avg /= N;

        int ans = 0;
        for(int i=0; i<N; i++)
            if(arr[i] <= avg) ans++;

        cout << ans << "\n";
    }
}
