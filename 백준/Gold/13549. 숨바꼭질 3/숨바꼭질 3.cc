#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int arr[MAX];
    memset(arr, -1, sizeof(arr));
    arr[N] = 0;

    queue<int> Q;
    Q.push(N);

    while(!Q.empty()) {
        int x = Q.front();
        Q.pop();

        if(x == K) break;

        if(x*2 < MAX && arr[x*2] == -1) {
            arr[x*2] = arr[x];
            Q.push(x*2);
        }
        if(x-1 >= 0 && arr[x-1] == -1) {
            arr[x-1] = arr[x] + 1;
            Q.push(x-1);
        }
        if(x+1 < MAX && arr[x+1] == -1) {
            arr[x+1] = arr[x] + 1;
            Q.push(x+1);
        }
    }

    cout << arr[K] << "\n";
}
