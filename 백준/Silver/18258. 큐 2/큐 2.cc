#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    queue<int> Queue;

    while(N--) {
        string str; cin >> str;

        if(str == "push") {
            int val; cin >> val;
            Queue.push(val);
        }
        else if(str == "pop" && !Queue.empty()) {
            cout << Queue.front() << "\n";
            Queue.pop();
        }
        else if(str == "size") cout << Queue.size() << "\n";
        else if(str == "empty") cout << Queue.empty() << "\n";
        else if(str == "front" && !Queue.empty()) cout << Queue.front() << "\n";
        else if(str == "back" && !Queue.empty()) cout << Queue.back() << "\n";
        else cout << "-1\n";
    }
}
