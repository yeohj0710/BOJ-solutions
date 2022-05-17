#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, N; cin >> K >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int sum = 0;
    bool check = false;

    for(int i=0; i<N; i++) {
        sum += v[i];

        if(sum > K) {
            cout << i << "\n";
            check = true;
            break;
        }
    }
    if(!check) cout << N << "\n";
}
