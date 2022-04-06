#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N*5; j++) cout << "@";
        cout << "\n";
    }
    for(int i=0; i<N*3; i++) {
        for(int j=0; j<N; j++) cout << "@";
        cout << "\n";
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N*5; j++) cout << "@";
        cout << "\n";
    }
}
