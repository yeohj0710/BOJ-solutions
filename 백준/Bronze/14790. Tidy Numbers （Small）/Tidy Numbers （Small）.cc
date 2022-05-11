#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        int ans = 0;
        for(int i=N; i>=1; i--) {
            string temp = to_string(i);

            int check = true;
            for(int i=1; i<temp.length(); i++)
                if(temp[i] < temp[i-1]) check = false;

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
