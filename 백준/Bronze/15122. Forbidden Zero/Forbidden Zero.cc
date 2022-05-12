#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    while(true) {
        N++;

        string str = to_string(N);

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(str[i] == '0') check = false;

        if(check) break;
    }

    cout << N << "\n";
}
