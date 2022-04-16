#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> winner(N+1); // SK : 1 / CY :0

    winner[1] = 1;
    winner[2] = 0;
    winner[3] = 1;
    winner[4] = 1;

    for(int i=5; i<=N; i++)
        if(!winner[i-1] || !winner[i-3] || !winner[i-4]) winner[i] = 1;

    if(winner[N]) cout << "SK\n";
    else cout << "CY\n";
}
