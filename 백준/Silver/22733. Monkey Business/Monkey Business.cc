#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        for(int i=1; i*i<=N; i++) cout << i*i << "\n";
        
        cout << "\n";
    }
}
