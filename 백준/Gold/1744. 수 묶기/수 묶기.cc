#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0, zero = 0;
    priority_queue<int, vector<int>, greater<int>> pos;
    priority_queue<int> neg;

    while(N--) {
        int value; cin >> value;

        if(value == 1) ans += 1;
        else if(value > 0) pos.push(value);
        else if(value < 0) neg.push(value);
        else zero++;
    }

    if(pos.size() % 2 == 1) {
        ans += pos.top();
        pos.pop();
    }

    while(!pos.empty()) {
        int val1 = pos.top();
        pos.pop();

        int val2 = pos.top();
        pos.pop();

        ans += val1 * val2;
    }

    if(neg.size () % 2 == 1) {
        if(zero > 0) neg.pop();
        else {
            ans += neg.top();
            neg.pop();
        }
    }

    while(!neg.empty()) {
        int val1 = neg.top();
        neg.pop();

        int val2 = neg.top();
        neg.pop();

        ans += val1 * val2;
    }

    cout << ans;
}
