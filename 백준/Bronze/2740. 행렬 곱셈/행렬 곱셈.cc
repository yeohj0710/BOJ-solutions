#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K, arr1[105][105], arr2[105][105];
    cin >> N >> M;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr1[i][j];
    cin >> M >> K;
    for(int i=0; i<M; i++)
        for(int j=0; j<K; j++) cin >> arr2[i][j];
    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            long long val = 0;
            for(int k=0; k<M; k++) val += arr1[i][k] * arr2[k][j];
            cout << val << " ";
        }
        cout << "\n";
    }
}
