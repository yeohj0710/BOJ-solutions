#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=N; i>0; i--) {
        string temp = to_string(i);

        bool check = true;
        for(int j=0; j<temp.length(); j++)
            if(temp[j] != '4' && temp[j] != '7') check = false;

        if(check) {
            cout << i;
            break;
        }
    }
}
