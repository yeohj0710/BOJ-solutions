#include <bits/stdc++.h>
using namespace std;

vector<int> Dec;

void DecToBin(int N) {
    if(N == 0) return;

    DecToBin(N/2);
    Dec.push_back(N%2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    DecToBin(N);

    int sum = 0;
    for(int i=Dec.size()-1; i>=0; i--) sum += Dec[i] * pow(2, i);
    cout << sum;
}
