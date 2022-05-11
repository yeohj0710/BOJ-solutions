#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[101][101] = {};

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    bool check = true;
    for(int i=1; i<N; i++)
        if(arr[i][0] < arr[i-1][0]) check = false;
    for(int i=0; i<N; i++)
        for(int j=1; j<N; j++)
            if(arr[i][j] < arr[i][j-1]) check = false;

    if(check) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) cout << arr[i][j] << " ";
            cout << "\n";
        }
        return 0;
    }

    check = true;
    for(int i=N-2; i>=0; i--)
        if(arr[0][i] < arr[0][i+1]) check = false;
    for(int i=N-1; i>=0; i--)
        for(int j=1; j<N; j++)
            if(arr[j][i] < arr[j-1][i]) check = false;

    if(check) {
        for(int i=N-1; i>=0; i--) {
            for(int j=0; j<N; j++) cout << arr[j][i] << " ";
            cout << "\n";
        }
        return 0;
    }

    check = true;
    for(int i=1; i<N; i++)
        if(arr[N-1][i] < arr[N-1][i-1]) check = false;
    for(int i=0; i<N; i++)
        for(int j=N-2; j>=0; j--)
            if(arr[j][i] < arr[j+1][i]) check = false;

    if(check) {
        for(int i=0; i<N; i++) {
            for(int j=N-1; j>=0; j--) cout << arr[j][i] << " ";
            cout << "\n";
        }
        return 0;
    }

    for(int i=N-1; i>=0; i--) {
        for(int j=N-1; j>=0; j--) cout << arr[i][j] << " ";
        cout << "\n";
    }
}
