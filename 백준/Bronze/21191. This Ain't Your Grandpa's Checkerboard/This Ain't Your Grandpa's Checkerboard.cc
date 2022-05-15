#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    char arr[25][25];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> arr[i][j];
        cin.ignore();
    }

    bool check = true;

    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<N; j++)
            if(arr[i][j] == 'B') cnt++;

        if(cnt != N - cnt) check = false;
    }

    for(int j=0; j<N; j++) {
        int cnt = 0;
        for(int i=0; i<N; i++)
            if(arr[i][j] == 'B') cnt++;

        if(cnt != N - cnt) check = false;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<N-3; j++)
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2]) check = false;

    for(int j=0; j<N; j++)
        for(int i=0; i<N-3; i++)
            if(arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j]) check = false;

    if(check) cout << "1\n";
    else cout << "0\n";
}
