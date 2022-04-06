#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    char arr[50][50];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> arr[i][j];
        cin.ignore();
    }

    for(int k=min(N, M); k>=1; k--)
        for(int i=0; i<=N-k; i++)
            for(int j=0; j<=M-k; j++)
                if(arr[i][j] == arr[i+k-1][j] && arr[i][j] == arr[i][j+k-1]
                && arr[i][j] == arr[i+k-1][j+k-1]) {
                    cout << k*k;
                    return 0;
                }
}
