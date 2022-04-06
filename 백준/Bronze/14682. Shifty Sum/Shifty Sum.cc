#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int N, K; cin >> N >> K;
    
    int ans = N;
    while(K--) {
        N *= 10;
        ans += N;
    }
    
    cout << ans;
}