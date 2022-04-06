#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<=N; i++) {
        char str[100];
        cin.getline(str, sizeof(str));
        if(i > 0) cout << i << ". " << str << "\n";
    }
}
