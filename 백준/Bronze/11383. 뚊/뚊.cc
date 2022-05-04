#include <bits/stdc++.h>
using namespace std;

const int MAX = 11;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    char arr[MAX][MAX];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> arr[i][j];
        cin.ignore();
    }

    bool check = true;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M*2; j++) {
            char c; cin >> c;

            if(c != arr[i][j/2]) check = false;
        }
        cin.ignore();
    }

    if(check) cout << "Eyfa\n";
    else cout << "Not Eyfa\n";
}
