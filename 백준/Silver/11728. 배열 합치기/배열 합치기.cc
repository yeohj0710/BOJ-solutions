#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> arr(N+M);

    for(int i=0; i<arr.size(); i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";
    cout << "\n";
}
