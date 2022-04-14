#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> arr, ans;
vector<bool> check;

void DFS(int idx, int cnt) {
    if(idx == N && cnt < M) return;

    if(cnt == M) {
        for(int i=0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=idx; i<N; i++) {
        if(!check[i]) {
            ans.push_back(arr[i]);
            check[i] = true;

            DFS(i+1, cnt+1);

            ans.pop_back();
            check[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    arr.resize(N);
    check.resize(N);

    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    DFS(0, 0);
}
