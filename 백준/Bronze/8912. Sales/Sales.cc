#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> arr(N);
        for(int i=0; i<N; i++) cin >> arr[i];

        int cnt = 0;
        for(int i=1; i<N; i++)
            for(int j=0; j<i; j++)
                if(arr[j] <= arr[i]) cnt++;

        cout << cnt << "\n";
    }
}
