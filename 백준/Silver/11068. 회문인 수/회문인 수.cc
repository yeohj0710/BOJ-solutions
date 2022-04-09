#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool found = false;
        for(int i=2; i<=64; i++) {
            int temp = N;

            vector<int> arr;
            while(temp > 0) {
                arr.push_back(temp % i);
                temp /= i;
            }

            bool check = true;
            for(int j=0; j<arr.size()/2; j++)
                if(arr[j] != arr[arr.size()-1-j]) check = false;

            if(check) {
                cout << "1\n";
                found = true;
                break;
            }
        }

        if(!found) cout << "0\n";
    }
}
