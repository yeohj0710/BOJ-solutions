#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    char arr[101][101];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> arr[i][j];
        cin.ignore();
    }

    string a = "", b = "";

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) a += arr[i][j];

    for(int j=0; j<N; j++)
        for(int i=0; i<N; i++) b += arr[i][j];

    bool check = true;
    for(int i=0; i<N*N; i++)
        if(a[i] != b[i]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
