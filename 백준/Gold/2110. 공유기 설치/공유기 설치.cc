#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, C; cin >> N >> C;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int Left = 1, Right = arr[N-1], ans = 0;
    while(Left <= Right) {
        int Mid = (Left + Right)/2;
        int cnt = 1, before = arr[0];

        for(int i=1; i<N; i++)
            if(arr[i] - before >= Mid) {
                cnt++;
                before = arr[i];
            }

        if(cnt >= C) {
            ans = Mid;
            Left = Mid + 1;
        }
        else Right = Mid - 1;
    }
    cout << ans;
}
