#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;

char arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, C, ZR, ZC; cin >> R >> C >> ZR >> ZC;
    cin.ignore();

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) cin >> arr[i][j];
        cin.ignore();
    }

    for(int i=0; i<R; i++)
        for(int j=0; j<ZR; j++) {
            for(int k=0; k<C; k++)
                for(int l=0; l<ZC; l++) cout << arr[i][k];
            cout << "\n";
        }
}
