#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> arr(N);

    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    cout << fixed; cout.precision(2);

    cout << arr[1];
}
