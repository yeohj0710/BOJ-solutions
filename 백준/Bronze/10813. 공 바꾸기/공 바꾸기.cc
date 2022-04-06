#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M, Arr[105];
    cin >> N >> M;
    for(int i=1; i<=N; i++) Arr[i] = i;
    while(M--) {
        int a, b;
        cin >> a >> b;
        swap(Arr[a], Arr[b]);
    }
    for(int i=1; i<=N; i++) cout << Arr[i] << " ";
}
