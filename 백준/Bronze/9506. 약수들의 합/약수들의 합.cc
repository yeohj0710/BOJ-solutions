#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        int sum = 1;
        vector<int> aliquot;
        for(int i=2; i<N; i++)
            if(N%i == 0) {
                sum += i;
                aliquot.push_back(i);
            }

        if(sum == N) {
            cout << N << " = 1";
            for(int i=0; i<aliquot.size(); i++) cout << " + " << aliquot[i];
        }
        else cout << N << " is NOT perfect.";
        cout << "\n";
    }
}
