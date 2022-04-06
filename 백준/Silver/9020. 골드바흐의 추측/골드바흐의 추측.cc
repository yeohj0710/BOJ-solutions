#include <bits/stdc++.h>
using namespace std;

bool comp[10005] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    for(int i=2; i*i<=10000; i++)
        for(int j=2; i*j<=10000; j++) comp[i*j] = true;

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        for(int i=N/2; i>=2; i--)
            if(!comp[i] && !comp[N-i]) {
                cout << i << " " << N-i << "\n";
                break;
            }
    }
}
