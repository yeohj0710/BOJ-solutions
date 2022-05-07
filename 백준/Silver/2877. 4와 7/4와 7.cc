#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int i = 1;
    while(true) {
        if(N > pow(2, i)) N -= pow(2, i);
        else break;

        i++;
    }

    N--;

    for(int j=i-1; j>=0; j--) {
        if(N & (1 << j)) cout  << "7";
        else cout << "4";
    }
    cout << "\n";
}
