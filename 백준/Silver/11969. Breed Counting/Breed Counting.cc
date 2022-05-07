#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;

int sum[MAX][4] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, Q; cin >> N >> Q;

    for(int i=1; i<=N; i++) {
        int val; cin >> val;

        for(int j=1; j<=3; j++) {
            if(j == val) sum[i][j] = sum[i-1][j] + 1;
            else sum[i][j] = sum[i-1][j];
        }
    }

    while(Q--) {
        int a, b; cin >> a >> b;

        for(int i=1; i<=3; i++)
            cout << sum[b][i] - sum[a-1][i] << " ";

        cout << "\n";
    }
}
