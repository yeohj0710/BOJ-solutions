#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    char a[51][51], b[51][51];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> a[i][j];
        cin.ignore();
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> b[i][j];
        cin.ignore();
    }

    int cnt = 0;
    for(int i=0; i<N-2; i++)
        for(int j=0; j<M-2; j++)
            if(a[i][j] != b[i][j]) {
                cnt++;
                for(int k=0; k<3; k++)
                    for(int l=0; l<3; l++) {
                        if(a[i+k][j+l] == '0') a[i+k][j+l] = '1';
                        else a[i+k][j+l] = '0';
                    }
            }

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(a[i][j] != b[i][j]) check = false;

    if(!check) cout << "-1";
    else cout << cnt;
}
