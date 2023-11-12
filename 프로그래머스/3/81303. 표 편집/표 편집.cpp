#include <string>
#include <vector>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
    string answer = "";

    vector<int> v(n, -1), u(n, -1), w;
    for(int i=0; i<n-1; i++) v[i] = i + 1;
    for(int i=1; i<n; i++) u[i] = i - 1;

    int head = 0, tail = n - 1, cur = k;

    for(int i=0; i<cmd.size(); i++) {
        if(cmd[i][0] == 'U') {
            int cnt = stoi(cmd[i].substr(2, cmd[i].length()-2));

            for(int j=0; j<cnt; j++) cur = u[cur];
        }
        else if(cmd[i][0] == 'D') {
            int cnt = stoi(cmd[i].substr(2, cmd[i].length()-2));

            for(int j=0; j<cnt; j++) cur = v[cur];
        }
        else if(cmd[i][0] == 'C') {
            w.push_back(cur);

            if(cur != head) v[u[cur]] = v[cur];
            else head = v[cur];

            if(cur != tail) {
                u[v[cur]] = u[cur];
                cur = v[cur];
            }
            else {
                tail = u[cur];
                cur = u[cur];
            }
        }
        else if(cmd[i][0] == 'Z') {
            int x = w.back();
            w.pop_back();

            if(u[x] != -1) v[u[x]] = x;
            if(v[x] != -1) u[v[x]] = x;

            if(v[x] == head) head = x;
            if(u[x] == tail) tail = x;
        }

        int x = head;
    }

    vector<bool> exs(n);
    int x = head;

    while(true) {
        exs[x] = true;

        if(x == tail) break;
        else x = v[x];
    }

    for(int i=0; i<exs.size(); i++) {
        if(exs[i]) answer += 'O';
        else answer += 'X';
    }

    return answer;
}