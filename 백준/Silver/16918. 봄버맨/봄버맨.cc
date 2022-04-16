#include <bits/stdc++.h>
#define MAX 201
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int arr[MAX][MAX] = {};
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char c; cin >> c;

            if(c == '.') arr[i][j] = -1;
            else arr[i][j] = 1;
        }

    int di[4] = {1, -1, 0, 0};
    int dj[4] = {0, 0, 1, -1};

    int time = 1;
    bool bomb[MAX][MAX];

    while(time < K) {
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) bomb[i][j] = false;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(arr[i][j] == -1) arr[i][j] = 0;
                else {
                    arr[i][j]++;

                    if(arr[i][j] == 3) {
                        bomb[i][j] = true;

                        for(int k=0; k<4; k++) {
                            int ni = i + di[k];
                            int nj = j + dj[k];

                            if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;

                            bomb[ni][nj] = true;
                        }
                    }
                }
            }

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(bomb[i][j]) arr[i][j] = -1;

        time++;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(arr[i][j] == -1) cout << ".";
            else cout << "O";
        }
        cout << "\n";
    }
}
