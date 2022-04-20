#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    bool button[10] = {};
    for(int i=0; i<10; i++) button[i] = true;

    while(M--) {
        int val; cin >> val;
        button[val] = false;
    }

    int ans = abs(N - 100);

    int temp = N;
    while(true) {
        string str = to_string(temp);

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(!button[str[i] - '0']) check = false;

        if(!check) {
            if(temp < 0) break;
            else {
                temp--;
                continue;
            }
        }
        else {
            ans = min(ans, (int)str.length() + abs(N - temp));
            break;
        }
    }

    temp = N;
    while(true) {
        string str = to_string(temp);

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(!button[str[i] - '0']) check = false;

        if(!check) {
            if(temp > 1000000) break;
            else {
                temp++;
                continue;
            }
        }
        else {
            ans = min(ans, (int)str.length() + abs(N - temp));
            break;
        }
    }

    cout << ans << "\n";
}
