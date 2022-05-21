#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        int arr[11][11];

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> arr[i][j];

        bool check = true;
        for(int i=0; i<N-1; i++)
            for(int j=0; j<N-1; j++) {
                if(arr[i][j+1] - arr[i][j] != arr[i+1][j+1] - arr[i+1][j]) check = false;
                if(arr[i+1][j] - arr[i][j] != arr[i+1][j+1] - arr[i][j+1]) check = false;
            }

        if(check) cout << t << ". YES\n";
        else cout << t << ". NO\n";
    }
}
