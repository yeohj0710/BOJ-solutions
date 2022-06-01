#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int Min = INT_MAX;
    for(int i=0; i<N-2; i++) Min = min(Min, max(v[i], v[i+2]));

    for(int i=0; i<N-2; i++)
        if(max(v[i], v[i+2]) == Min) {
            cout << i+1 << " " << max(v[i], v[i+2]) << "\n";
            break;
        }
}
