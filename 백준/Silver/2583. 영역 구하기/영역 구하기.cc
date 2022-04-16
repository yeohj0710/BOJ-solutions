#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int N, M, K;
bool arr[MAX][MAX] = {};
int area = 0;

void DFS(int x, int y) {
    arr[x][y] = true;
    area++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if(!arr[nx][ny]) DFS(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> K;

    while(K--) {
        int x1, y1, x2, y2; cin >> y1 >> x1 >> y2 >> x2;

        for(int i=x1; i<x2; i++)
            for(int j=y1; j<y2; j++) arr[i][j] = true;
    }

    vector<int> areaList;

    int cnt = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(!arr[i][j]) {
                area = 0;

                DFS(i, j);

                areaList.push_back(area);
                cnt++;
            }

    cout << cnt << "\n";

    sort(areaList.begin(), areaList.end());
    for(int i=0; i<areaList.size(); i++) cout << areaList[i] << " ";
}
