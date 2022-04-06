#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string name; cin >> name;

    int sum = 0;
    for(int i=0; i<N; i++) sum += name[i] - 'A' + 1;

    cout << sum;
}
