#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B, C, N; cin >> A >> B >> C >> N;

    for(int i=0; A*i<=N; i++)
        for(int j=0; A*i+B*j<=N; j++)
            for(int k=0; A*i+B*j+C*k<=N; k++)
                if(A*i + B*j + C*k == N) {
                    cout << "1";
                    return 0;
                }

    cout << "0";
}
