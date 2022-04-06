#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool winner[1001] = {1, 0, 1, 0, 1}; // SK : 1 / CY : 0

    int N; cin >> N;

    for(int i=5; i<=N; i++)
        if(winner[i-1] && winner[i-3] && winner[i-4]) winner[i] = 0;
    else winner[i] = 1;

    if(winner[N]) cout << "SK";
    else cout << "CY";
}
