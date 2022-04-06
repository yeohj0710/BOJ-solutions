#include <bits/stdc++.h>
#define MAX 32000
using namespace std;

int not_prime[MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i*i<MAX; i++)
        for(int j=2; i*j<MAX; j++) not_prime[i*j] = 1;

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> factor;
        int temp = N;

        for(int i=2; i*i<=N; i++) {
            if(not_prime[i] == 1) continue;

            bool check = false;
            while(temp % i == 0) {
                temp /= i;
                check = true;
            }

            if(check) factor.push_back(i);
        }
        if(temp > 1) factor.push_back(temp);

        int ans = N;
        for(int i=0; i<factor.size(); i++) ans = ans / factor[i] * (factor[i] - 1);

        cout << ans << "\n";
    }
}
