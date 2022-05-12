#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i=1; i<=arr[N-1]; i++) {
        bool check = false;
        for(int j=0; j<N; j++)
            if(i == arr[j]) check = true;

        if(!check) cout << i << "\n";
    }

    if(N == arr[N-1]) cout << "good job\n";
}
