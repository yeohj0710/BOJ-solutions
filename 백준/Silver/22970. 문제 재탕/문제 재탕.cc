#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++) {
        int j = i;
        while(j-1 >= 0 && v[j-1] < v[j]) j--;

        int k = i;
        while(k+1 < N && v[k] > v[k+1]) k++;

        ans = max(ans, k-j+1);
    }

    cout << ans << "\n";
}
