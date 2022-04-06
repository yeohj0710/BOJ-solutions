#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    char arr[50][50];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(arr[i][j] != '.') cout << arr[i][j];
            else if(arr[i][M-1-j] != '.') cout << arr[i][M-1-j];
            else cout << ".";
        }
        cout << "\n";
    }
}
