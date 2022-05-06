#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;

char arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> arr[i][j];
        cin.ignore();
    }

    int K; cin >> K;

    if(K == 1) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) cout << arr[i][j];
            cout << "\n";
        }
    }
    else if(K == 2) {
        for(int i=0; i<N; i++) {
            for(int j=N-1; j>=0; j--) cout << arr[i][j];
            cout << "\n";
        }
    }
    else if(K == 3) {
        for(int i=N-1; i>=0; i--) {
            for(int j=0; j<N; j++) cout << arr[i][j];
            cout << "\n";
        }
    }
}
