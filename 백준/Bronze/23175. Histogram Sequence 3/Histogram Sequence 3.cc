#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int i = 0;
    while(true) {
        if(i >= N) break;

        cout << arr[i] << " ";

        i += arr[i];
    }
}
