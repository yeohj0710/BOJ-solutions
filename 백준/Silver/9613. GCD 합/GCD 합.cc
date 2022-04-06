#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> arr(N+1);
        for(int i=0; i<N; i++) cin >> arr[i];

        long long sum = 0;
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                int a = arr[i], b = arr[j];

                if(a < b) swap(a, b);

                while(b > 0) {
                    int temp = a % b;
                    a = b;
                    b = temp;
                }

                sum += (long long) a;
            }

        cout << sum << "\n";
    }
}
