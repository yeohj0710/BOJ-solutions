#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = "";
    for(int i=1; i<=N; i++) str += to_string(i);

    int strLen = str.length(), numLen = to_string(N).length();
    string numStr = to_string(N);

    for(int i=0; i<strLen; i++)
        if(str.substr(i, numLen) == numStr) {
            cout << i+1;
            return 0;
        }
}
