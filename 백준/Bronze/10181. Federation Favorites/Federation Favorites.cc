#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;

int arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        int sum = 0;
        vector<int> v;

        for(int i=1; i<N; i++)
            if(N % i == 0) {
                sum += i;
                v.push_back(i);
            }

        if(sum == N) {
            cout << N << " = 1";
            for(int i=1; i<v.size(); i++) cout << " + " << v[i];
            cout << "\n";
        }
        else cout << N << " is NOT perfect.\n";
    }
}
