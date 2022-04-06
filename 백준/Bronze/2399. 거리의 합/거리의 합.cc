#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> spot(N);
    for(int i=0; i<N; i++) cin >> spot[i];

    long long sum = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            sum += (long long)abs(spot[i] - spot[j]);

    cout << sum*2;
}
