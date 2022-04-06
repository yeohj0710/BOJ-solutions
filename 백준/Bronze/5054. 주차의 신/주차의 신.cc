#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        int Arr[105];
        for(int i=0; i<N; i++) cin >> Arr[i];
        sort(Arr, Arr+N);
        cout << (Arr[N-1]-Arr[0])*2 << "\n";
    }
}
