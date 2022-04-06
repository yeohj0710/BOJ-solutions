#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    stack<int> Stack;
    vector<int> ans(N);
    for(int i=N-1; i>=0; i--) {
        while(!Stack.empty() && arr[i] >= Stack.top())
            Stack.pop();

        if(Stack.empty()) ans[i] = -1;
        else ans[i] = Stack.top();

        Stack.push(arr[i]);
    }

    for(int i=0; i<N; i++) cout << ans[i] << " ";
}
