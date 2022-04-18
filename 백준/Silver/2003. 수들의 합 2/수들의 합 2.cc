#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<long long> arr(N+1), sum(N+1);
    for(int i=1; i<=N; i++) {
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }

    int i = 1, j = 1, cnt = 0;
    while(j <= N) {
        long long part = sum[j] - sum[i-1];

        if(part <= M) {
            if(part == M) cnt++;
            j++;
        }
        else {
            i++;
            if(i > j) j = i;
        }
    }

    cout << cnt << "\n";
}
