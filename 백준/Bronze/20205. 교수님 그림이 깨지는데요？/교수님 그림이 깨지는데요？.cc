#include <bits/stdc++.h>
using namespace std;

const int MAX = 11;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int arr[MAX][MAX];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<K; j++) {
            for(int k=0; k<N; k++)
                for(int l=0; l<K; l++) cout << arr[i][k] << " ";
            cout << "\n";
        }
}
