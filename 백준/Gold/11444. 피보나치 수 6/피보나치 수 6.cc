#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef vector<vector<long long>> matrix;

matrix multiply(matrix& A, matrix& B) {
    matrix C = {{0, 0}, {0, 0}};

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int k=0; k<2; k++)
                C[i][j] = (C[i][j] + A[i][k]*B[k][j]) % MOD;

    return C;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long N; cin  >> N;
    matrix ans = {{1, 0}, {0, 1}}, A = {{1, 1}, {1, 0}};

    while(N > 0) {
        if(N % 2 == 1)
            ans = multiply(ans, A);
        A = multiply(A, A);
        N /= 2;
    }

    cout << ans[0][1];
}
