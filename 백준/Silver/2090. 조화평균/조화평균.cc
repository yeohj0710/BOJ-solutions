#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<long long> term(N);
    for(int i=0; i<N; i++) cin >> term[i];

    long long numer = 1, denom = 0;
    for(int i=0; i<term.size(); i++) numer *= term[i];
    for(int i=0; i<term.size(); i++) denom += numer/term[i];

    long long a = max(numer, denom);
    long long b = min(numer, denom);

    while(b > 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }

    cout << numer/a << "/" << denom/a;
}
