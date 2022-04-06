#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int X; cin >> X;

    sort(arr.begin(), arr.end());

    int i = 0, j = N-1, ans = 0;
    while(true) {
        if(i == j) break;

        int sum = arr[i] + arr[j];
        if(sum == X) ans++, i++;
        else if(sum < X) i++;
        else if(sum > X) j--;
    }

    cout << ans;
}
