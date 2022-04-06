#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;
    char first = str[0]; bool check = true;

    for(int i=1; i<N; i++) {
        cin >> str;
        if(str[0] != first) {
            check = false;
            break;
        }
    }

    cout << check;
}
