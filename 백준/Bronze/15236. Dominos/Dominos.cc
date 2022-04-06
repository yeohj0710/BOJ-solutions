#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int sum = 0;
    for(int i=0; i<=N; i++)
        for(int j=0; j<=i; j++) sum += i+j;
    cout << sum;
}
