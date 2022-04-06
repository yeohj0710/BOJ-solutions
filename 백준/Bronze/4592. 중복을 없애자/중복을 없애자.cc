#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        vector<int> arr(N);
        for(int i=0; i<N; i++) cin >> arr[i];

        cout << arr[0] << " ";
        for(int i=1; i<N; i++)
            if(arr[i] != arr[i-1]) cout << arr[i] << " ";

        cout << "$\n";
    }
}
