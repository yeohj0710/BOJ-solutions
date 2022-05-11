#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";


        int sum, N; cin >> sum >> N;

        vector<int> arr(N);
        for(int i=0; i<N; i++) cin >> arr[i];

        for(int i=0; i<N; i++) {
            bool check = false;
            for(int j=i+1; j<N; j++)
                if(arr[i] + arr[j] == sum) {
                    cout << i+1 << " " << j+1 << "\n";
                    check = true;
                    break;
                }
            if(check) break;
        }
    }
}
