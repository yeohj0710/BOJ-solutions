#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K; cin >> K;
    cin.ignore();

    vector<vector<int>> adj(101);

    while(true) {
        string str; getline(cin, str);
        if(str == "-1") break;

        string num = "";
        int cur = 0;

        while(str[cur] != ' ') {
            num += str[cur];
            cur++;
        }

        int a = stoi(num);

        num = "";

        for(int i=cur+1; i<str.length(); i++) {
            if(str[i] != ' ') num += str[i];
            else {
                int b = stoi(num);
                adj[b].push_back(a);

                num = "";
            }
        }
        adj[stoi(num)].push_back(a);
    }

    queue<int> q;
    q.push(K);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        cout << x << " ";

        for(int i=0; i<adj[x].size(); i++) {
            q.push(adj[x][i]);
        }
    }
    cout << "\n";
}
