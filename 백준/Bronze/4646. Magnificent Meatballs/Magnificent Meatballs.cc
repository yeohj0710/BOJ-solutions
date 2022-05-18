#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int sum = 0;
        for(int i=0; i<N; i++) sum += v[i];

        int part = 0;
        bool check = false;
        for(int i=0; i<N; i++) {
            part += v[i];

            if(part * 2 == sum) {
                cout << "Sam stops at position " << i+1 << " and Ella stops at position " << i+2 << ".\n";
                check = true;
                break;
            }
        }
        if(!check) cout << "No equal partitioning.\n";
    }
}
