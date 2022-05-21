#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        if(N == 1) {
            cout << "1 DEFICIENT\n";
            continue;
        }

        vector<int> v;

        for(int i=2; i*i<N; i++)
            if(N % i == 0) {
                v.push_back(i);
                v.push_back(N/i);
            }
        v.push_back(1);
        if(pow(sqrt(double(N)), 2) == N) v.push_back(sqrt(N));

        int sum = 0;
        for(int i=0; i<v.size(); i++) sum += v[i];

        cout << N << " ";

        if(sum == N) cout << "PERFECT\n";
        else if(sum < N) cout << "DEFICIENT\n";
        else if(sum > N) cout << "ABUNDANT\n";
    }
}
