#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> weight(N);
    for(int i=0; i<N; i++) cin >> weight[i];

    sort(weight.begin(), weight.end());

    int sum = 0;
    for(int i=0; i<N; i++) {
        if(weight[i] > sum + 1) break;

        sum += weight[i];
    }

    cout << sum + 1;
}
