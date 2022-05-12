#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int Min = INT_MAX;
    for(int i=0; i<N; i++) Min = min(Min, arr[i]);

    for(int i=0; i<N; i++)
        if(arr[i] == Min) {
            cout << i << "\n";
            break;
        }
}
