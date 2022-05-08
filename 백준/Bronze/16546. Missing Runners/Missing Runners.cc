#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> arr(N+1);
    for(int i=0; i<N-1; i++) {
        int x; cin >> x;
        arr[x] = true;
    }

    for(int i=1; i<=N; i++)
        if(!arr[i]) cout << i << "\n";
}
