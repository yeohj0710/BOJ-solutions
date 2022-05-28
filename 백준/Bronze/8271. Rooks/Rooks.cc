#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(N));

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> v[i][j];
        cin.ignore();
    }

    vector<int> x, y;

    for(int i=0; i<N; i++) {
        bool check = true;
        for(int j=0; j<N; j++)
            if(v[i][j] == 'W') check = false;
        if(check) x.push_back(i);
    }

    for(int i=0; i<N; i++) {
        bool check = true;
        for(int j=0; j<N; j++)
            if(v[j][i] == 'W') check = false;
        if(check) y.push_back(i);
    }

    for(int i=0; i<x.size(); i++) v[x[i]][y[i]] = 'W';

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << v[i][j];
        cout << "\n";
    }
}
