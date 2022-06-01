#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(N));

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> v[i][j];
        cin.ignore();
    }

    int a = 0, b = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N-1; j++)
            if(v[i][j] == '.' && v[i][j+1] == '.') {
                a++;
                while(j != N-1 && v[i][j+1] == '.') j++;
            }

    for(int i=0; i<N; i++)
        for(int j=0; j<N-1; j++)
            if(v[j][i] == '.' && v[j+1][i] == '.') {
                b++;
                while(j != N-1 && v[j+1][i] == '.') j++;
            }

    cout << a << " " << b << "\n";
}
