#include <bits/stdc++.h>
using namespace std;

int Arr[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        for(int i=0; i<N; i++) cin >> Arr[i];
        sort(Arr, Arr+N);
        cout << Arr[0] << " " << Arr[N-1] << "\n";
    }
}
