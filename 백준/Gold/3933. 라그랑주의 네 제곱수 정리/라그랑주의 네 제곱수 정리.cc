#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int cnt = 0, sqrtN = sqrt(N);
        for(int i=1; i<=sqrtN; i++) {
            if(i*i == N) { cnt++; continue; }
            for(int j=i; j<=sqrtN; j++) {
                if(i*i + j*j == N) { cnt++; break; }
                for(int k=j; k<=sqrtN; k++) {
                    if(i*i + j*j + k*k == N) { cnt++; break; }
                    for(int l=k; l<=sqrtN; l++) {
                        if(i*i + j*j + k*k + l*l == N) { cnt++; break; }
                        if(i*i + j*j + k*k + l*l > N) break;
                    }
                }
            }
        }

        cout << cnt << "\n";
    }
}
