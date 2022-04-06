#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> x(N), y(N), r(N);
    for(int i=0; i<N; i++)
        cin >> x[i] >> y[i] >> r[i];

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++) {
            if(i == j) continue;

            if(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) <= pow(r[i] + r[j], 2)) cnt++;
        }

        cout << cnt << "\n";
    }
}
