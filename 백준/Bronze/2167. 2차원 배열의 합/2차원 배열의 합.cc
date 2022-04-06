#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int arr[300][300];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> arr[i][j];

    int K; cin >> K;
    for(int i=0; i<K; i++) {
        int sum = 0;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1-1; j<x2; j++)
            for(int k=y1-1; k<y2; k++)
                sum += arr[j][k];
        cout << sum << "\n";
    }
}
