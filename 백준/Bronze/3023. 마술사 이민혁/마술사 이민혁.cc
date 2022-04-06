#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, C; cin >> R >> C;
    cin.ignore();

    char arr[100][100];
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) cin >> arr[i][j];
        cin.ignore();
    }

    for(int i=0; i<R; i++)
        for(int j=C; j<C*2; j++) arr[i][j] = arr[i][C*2-j-1];

    for(int i=R; i<R*2; i++)
        for(int j=0; j<C; j++) arr[i][j] = arr[R*2-i-1][j];

    for(int i=R; i<R*2; i++)
        for(int j=C; j<C*2; j++) arr[i][j] = arr[R*2-i-1][C*2-j-1];

    int A, B; cin >> A >> B;
    if(arr[A-1][B-1] == '.') arr[A-1][B-1] = '#';
    else arr[A-1][B-1] = '.';

    for(int i=0; i<R*2; i++) {
        for(int j=0; j<C*2; j++) cout << arr[i][j];
        cout << "\n";
    }
}
