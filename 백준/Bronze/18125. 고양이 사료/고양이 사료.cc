#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M)), u(N, vector<int>(M));

    for(int i=M-1; i>=0; i--)
        for(int j=0; j<N; j++) cin >> v[j][i];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> u[i][j];

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] != u[i][j]) check = false;

    if(check) {
        cout << "|>___/|        /}\n";
        cout << "| O < |       / }\n";
        cout << "(==0==)------/ }\n";
        cout << "| ^  _____    |\n";
        cout << "|_|_/     ||__|\n";
    }
    else {
        cout << "|>___/|     /}\n";
        cout << "| O O |    / }\n";
        cout << "( =0= )\"\"\"\"  \\\n";
        cout << "| ^  ____    |\n";
        cout << "|_|_/    ||__|\n";
    }
}
