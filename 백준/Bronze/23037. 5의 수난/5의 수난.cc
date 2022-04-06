#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int sum = 0;
    cout << pow(N%10, 5)+pow(N/10%10, 5)+pow(N/100%10, 5)+pow(N/1000%10, 5)+pow(N/10000, 5);
}
