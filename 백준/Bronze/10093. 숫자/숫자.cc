#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long A, B; cin >> A >> B;

    if(A > B) swap(A, B);

    if(A == B) cout << "0\n";
    else cout << B-A-1 << "\n";

    if(A+1 < B)
        for(long long i=A+1; i<B; i++) cout << i << " ";
}
