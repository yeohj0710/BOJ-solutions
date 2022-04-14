#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> arr, ans;

void DFS(int idx, int cnt) {
    if(cnt == M) {
        for(int i=0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=idx; i<N; i++) {
        ans.push_back(arr[i]);

        DFS(i+1, cnt+1);

        ans.pop_back();

        while(i < N-1 && arr[i] == arr[i+1]) i++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    arr.resize(N);

    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    DFS(0, 0);
}
