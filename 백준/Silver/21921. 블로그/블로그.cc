#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> arr(N);

    int sum = 0;
    for(int i=0; i<M; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int Max = sum, MaxCnt = 1;
    for(int i=M; i<N; i++) {
        cin >> arr[i];
        sum = sum + arr[i] - arr[i-M];

        if(sum > Max) Max = sum, MaxCnt = 1;
        else if(sum == Max) MaxCnt++;
    }

    if(Max == 0) cout << "SAD";
    else cout << Max << "\n" << MaxCnt;
}
