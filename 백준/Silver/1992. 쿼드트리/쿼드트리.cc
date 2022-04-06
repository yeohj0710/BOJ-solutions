#include <bits/stdc++.h>
using namespace std;

char arr[64][64];

void Search(int x, int y, int Size) {
    for(int i=x; i<x+Size; i++)
        for(int j=y; j<y+Size; j++)
            if(arr[i][j] != arr[x][y]) {
                cout << "(";
                Search(x, y, Size/2);
                Search(x, y + Size/2, Size/2);
                Search(x + Size/2, y, Size/2);
                Search(x + Size/2, y + Size/2, Size/2);
                cout << ")";
                return;
            }
    cout << arr[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        cin.clear();
        for(int j=0; j<N; j++) cin >> arr[i][j];
    }

    Search(0, 0, N);
}
