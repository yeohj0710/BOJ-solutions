#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> arr, u, v;
        for(int i=0; i<N; i++) {
            int x; cin >> x;

            arr.push_back(x);

            if(x % 2 == 0) u.push_back(x);
            else v.push_back(x);
        }

        sort(u.begin(), u.end(), greater<int>());
        sort(v.begin(), v.end());

        cout << "Case #" << t << ": ";

        int a = 0, b = 0;
        for(int i=0; i<N; i++) {
            if(arr[i] % 2 == 0) cout << u[a++] << " ";
            else cout << v[b++] << " ";
        }
        cout << "\n";
    }
}
