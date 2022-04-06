#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;
    cin.ignore();

    char input[100][100];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> input[i][j];

    for(int i=0; i<N; i++)
        for(int a=0; a<K; a++) {
            for(int j=0; j<M; j++)
                for(int b=0; b<K; b++) cout << input[i][j];
            cout << "\n";
        }
}
