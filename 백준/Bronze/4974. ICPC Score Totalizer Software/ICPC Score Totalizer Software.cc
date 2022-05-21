#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int sum = 0;
        for(int i=1; i<N-1; i++) sum += v[i];

        cout << sum/(N-2) << "\n";
    }
}
