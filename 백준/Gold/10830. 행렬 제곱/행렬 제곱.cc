#include <bits/stdc++.h>
using namespace std;

int N;
long long arr[5][5], ans[5][5];

void multiply(long long a[5][5], long long b[5][5]) {
    long long temp[5][5] = {};

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                temp[i][j] = (temp[i][j] + a[i][k]*b[k][j]) % 1000;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) a[i][j] = temp[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long Exp; cin >> N >> Exp;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> arr[i][j];
            if(i == j) ans[i][j] = 1;
        }

    while(Exp > 0) {
        if(Exp%2 == 1) multiply(ans, arr);
        multiply(arr, arr);
        Exp /= 2;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}
