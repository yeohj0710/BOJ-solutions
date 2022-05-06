#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;

char arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    for(int j=0; j<N; j++) {
        for(int i=M-1; i>=0; i--) {
            char c; cin >> c;

            if(c == '-') arr[i][j] = '|';
            else if(c == '|') arr[i][j] = '-';
            else if(c == '/') arr[i][j] = '\\';
            else if(c == '\\') arr[i][j] = '/';
            else if(c == '^') arr[i][j] = '<';
            else if(c == '<') arr[i][j] = 'v';
            else if(c == 'v') arr[i][j] = '>';
            else if(c == '>') arr[i][j] = '^';
            else arr[i][j] = c;
        }
        cin.ignore();
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) cout << arr[i][j];
        cout << "\n";
    }
}
