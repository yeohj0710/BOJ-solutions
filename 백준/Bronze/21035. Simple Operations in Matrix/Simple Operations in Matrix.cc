#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int arr[51][51];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    int Q; cin >> Q;

    while(Q--) {
        string s; cin >> s;
        int a, b; cin >> a >> b;

        if(s == "row")
            for(int i=0; i<M; i++) arr[a-1][i] += b;
        else
            for(int i=0; i<N; i++) arr[i][a-1] += b;
    }

    int sum = 0, Min = INT_MAX, Max = INT_MIN;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            sum += arr[i][j];
            Min = min(Min, arr[i][j]);
            Max = max(Max, arr[i][j]);
        }

    cout << sum << " " << Min << " " << Max << "\n";
}
