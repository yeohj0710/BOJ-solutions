#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int arr[100];
    int N, M; cin >> N >> M;
    for(int i=1; i<=N; i++) arr[i] = i;
    while(M--) {
        int i, j; cin >> i >> j;
        reverse(&arr[i], &arr[j+1]);
    }
    for(int i=1; i<=N; i++) cout << arr[i] << " ";
}
