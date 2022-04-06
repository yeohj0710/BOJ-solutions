#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long S; cin >> S;

    long long i = 1, sum = 0;
    while(sum <= S) {
        sum += i;
        i++;
    }
    cout << i - 2;
}
