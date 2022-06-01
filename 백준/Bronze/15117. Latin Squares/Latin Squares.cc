#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int N; cin >> N;
    cin.ignore();

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            char c; cin >> c;

            if(c >= '0' && c <= '9') v[i][j] = c - '0';
            else v[i][j] = c - 'A' + 10;
        }
        cin.ignore();
    }

    bool check = true;

    for(int i=0; i<N; i++) {
        vector<bool> cnt(N);
        for(int j=0; j<N; j++) cnt[v[i][j]] = true;

        for(int j=0; j<N; j++)
            if(!cnt[j]) check = false;
    }

    for(int i=0; i<N; i++) {
        vector<bool> cnt(N);
        for(int j=0; j<N; j++) cnt[v[j][i]] = true;

        for(int j=0; j<N; j++)
            if(!cnt[j]) check = false;
    }

    bool reduced = true;
    for(int i=0; i<N; i++)
        if(v[0][i] != i || v[i][0] != i) reduced = false;

    if(check) {
        if(reduced) cout << "Reduced\n";
        else cout << "Not Reduced\n";
    }
    else cout << "No\n";
}
