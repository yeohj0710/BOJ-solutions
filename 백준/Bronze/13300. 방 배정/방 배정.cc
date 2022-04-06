#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int arr[2][6] = {}, ans = 0;

    while(N--) {
        int i, j; cin >> i >> j;
        arr[i][j-1]++;
    }

    for(int i=0; i<2; i++)
        for(int j=0; j<6; j++)
            ans += (arr[i][j] + (K-1))/K;

    cout << ans;
}
