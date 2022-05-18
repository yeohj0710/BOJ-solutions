#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N+1);
        for(int i=1; i<N+1; i++) cin >> v[i];

        for(int i=1; i<N+1; i++)
            for(int j=0; j<v[i]-v[i-1]; j++) cout << i << " ";

        cout << "\n";
    }
}
