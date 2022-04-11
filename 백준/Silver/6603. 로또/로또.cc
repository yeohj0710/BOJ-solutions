#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> arr, lotto(6);

void DFS(int idx, int cnt) {
    if(cnt == 6) {
        for(int i=0; i<lotto.size(); i++) cout << lotto[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=idx; i<N; i++) {
        lotto[cnt] = arr[i];
        DFS(i+1, cnt+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL), cout.tie(NULL);

    while(true) {
        cin >> N;
        if(N == 0) break;

        arr.resize(N);
        for(int i=0; i<N; i++) cin >> arr[i];

        DFS(0, 0);
        cout << "\n";
    }
}
