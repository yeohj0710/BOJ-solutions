#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char arr[5][5];

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) cin >> arr[i][j];
        cin.ignore();
    }

    bool check = true;
    int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    int cnt = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            if(arr[i][j] == 'k') {
                cnt++;
                for(int k=0; k<8; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;

                    if(arr[nx][ny] == 'k') check = false;
                }
            }

    if(cnt != 9) check = false;

    if(check) cout << "valid\n";
    else cout << "invalid\n";
}
