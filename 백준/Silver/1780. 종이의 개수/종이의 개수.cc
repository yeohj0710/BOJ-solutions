#include <bits/stdc++.h>
using namespace std;

int arr[2200][2200];
int cnt[3] = {};

void Search(int x, int y, int Size) {
    for(int i=x; i<x+Size; i++)
        for(int j=y; j<y+Size; j++)
            if(arr[i][j] != arr[x][y]) {
                Search(x, y, Size/3);
                Search(x, y + Size/3, Size/3);
                Search(x, y + Size*2/3, Size/3);
                Search(x + Size/3, y, Size/3);
                Search(x + Size/3, y + Size/3, Size/3);
                Search(x + Size/3, y + Size*2/3, Size/3);
                Search(x + Size*2/3, y, Size/3);
                Search(x + Size*2/3, y + Size/3, Size/3);
                Search(x + Size*2/3, y + Size*2/3, Size/3);
                return;
            }

    if(arr[x][y] == -1) cnt[0]++;
    else if(arr[x][y] == 0) cnt[1]++;
    else if(arr[x][y] == 1) cnt[2]++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    Search(0, 0, N);
    cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];
}
