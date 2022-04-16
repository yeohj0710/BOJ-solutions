#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool prime[MAX] = {};
    for(int i=2; i<MAX; i++) prime[i] = true;
    for(int i=2; i*i<MAX; i++)
        for(int j=2; i*j<MAX; j++) prime[i*j] = false;

    int T; cin >> T;

    while(T--) {
        string from, to; cin >> from >> to;

        queue<string> Q;
        Q.push(from);

        int cnt[MAX] = {};
        for(int i=0; i<MAX; i++) cnt[i] = -1;
        cnt[stoi(from)] = 0;

        while(!Q.empty()) {
            string curr = Q.front();
            Q.pop();

            if(curr == to) break;

            for(int i=0; i<4; i++)
                for(int j=0; j<10; j++) {
                    string temp = curr;
                    temp[i] = j + '0';
                    int next = stoi(temp);

                    if(next < 1000 || !prime[next]) continue;
                    if(cnt[next] != -1) continue;

                    cnt[next] = cnt[stoi(curr)] + 1;
                    Q.push(temp);
                }
        }

        cout << cnt[stoi(to)] << "\n";
    }
}
