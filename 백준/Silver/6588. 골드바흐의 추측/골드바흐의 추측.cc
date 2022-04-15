#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool is_prime[MAX] = {};
    for(int i=2; i<MAX; i++) is_prime[i] = true;
    for(int i=2; i*i<MAX; i++)
        for(int j=2; i*j<MAX; j++) is_prime[i*j] = false;

    vector<int> prime;
    for(int i=2; i<MAX; i++)
        if(is_prime[i]) prime.push_back(i);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        bool check = false;
        for(int i=0; prime[i]<N; i++) {
            if(is_prime[N - prime[i]]) {
                cout << N << " = " << prime[i] << " + " << N - prime[i] << "\n";

                check = true;
                break;
            }
        }

        if(!check) cout << "Goldbach's conjecture is wrong.\n";
    }
}
