#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=0; i<N+2; i++) cout << "@";
    cout << "\n";
    for(int i=0; i<N; i++) {
        cout << "@";
        for(int j=0; j<N; j++) cout << " ";
        cout << "@\n";
    }
    for(int i=0; i<N+2; i++) cout << "@";
}
