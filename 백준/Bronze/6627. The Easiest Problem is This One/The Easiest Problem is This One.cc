#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        string str = to_string(N);
        int S = 0;
        for(int i=0; i<str.length(); i++) S += str[i] - '0';

        for(int i=11; ; i++) {
            string temp = to_string(N * i);
            int S_ = 0;
            for(int i=0; i<temp.length(); i++) S_ += temp[i] - '0';

            if(S == S_) {
                cout << i << "\n";
                break;
            }
        }
    }
}
