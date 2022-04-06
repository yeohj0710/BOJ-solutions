#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int arr[2][100][100] = {};
    for(int i=0; i<2; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<M; k++)
                cin >> arr[i][j][k];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++)
            cout << arr[0][i][j] + arr[1][i][j] << " ";
        cout << "\n";
    }
}
