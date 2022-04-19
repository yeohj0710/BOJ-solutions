#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    int budget; cin >> budget;

    sort(arr.begin(), arr.end());

    int Left = 0, Right = arr[N-1];
    int ans;

    while(Left <= Right) {
        int Mid = (Left + Right)/2;

        int sum = 0;
        for(int i=0; i<N; i++)
            sum += min(arr[i], Mid);

        if(sum > budget) Right = Mid - 1;
        else {
            ans = Mid;
            Left = Mid + 1;
        }
    }

    cout << ans << "\n";
}
