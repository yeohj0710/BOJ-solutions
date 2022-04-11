#include <bits/stdc++.h>
using namespace std;

int K, N;
vector<char> arr, ans;

void DFS(int idx, int cnt) {
    if(cnt == K) {
        int aeiou = 0;
        for(int i=0; i<ans.size(); i++)
            if(ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u') aeiou++;

        if(aeiou < 1 || ans.size() - aeiou < 2) return;

        for(int i=0; i<ans.size(); i++) cout << ans[i];
        cout << "\n";
        return;
    }

    for(int i=idx; i<N; i++) {
        ans[cnt] = arr[i];
        DFS(i+1, cnt+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> K >> N;

    arr.resize(N);
    ans.resize(K);

    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    DFS(0, 0);
}
