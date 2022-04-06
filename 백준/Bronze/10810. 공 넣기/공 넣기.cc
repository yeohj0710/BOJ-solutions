#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    int Arr[105] = {};
    while(M--) {
        int Left, Right, val; cin >> Left >> Right >> val;
        for(int i=Left; i<=Right; i++)
            Arr[i] = val;
    }
    for(int i=1; i<=N; i++) cout << Arr[i] << " ";
}
