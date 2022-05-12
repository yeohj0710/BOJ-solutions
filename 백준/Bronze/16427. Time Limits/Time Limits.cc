#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    int temp = arr[0] * M;

    temp--;
    temp /= 1000;
    temp++;

    cout << temp << "\n";
}
