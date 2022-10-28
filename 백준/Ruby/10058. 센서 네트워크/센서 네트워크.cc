#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; int n; };

double dis(s a, s b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

double ccw(s a, s b, s c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
}

vector<vector<int>> adj;
vector<int> ll, rr;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(rr[y] == -1 || (!vis[rr[y]] && f(rr[y]))) {
            ll[x] = y, rr[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    double M; cin >> M;

    vector<s> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].x >> v[i].y;

        v[i].n = i+1;
    }

    vector<int> ans;
    ans.push_back(1);

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            double r = dis(v[i], v[j]);

            if(r > M * M) continue;

            vector<s> u, w;

            for(int k=0; k<N; k++) {
                if(k == i || k == j) continue;
                if(dis(v[i], v[k]) > r || dis(v[j], v[k]) > r) continue;

                if(v[i].x == v[j].x) {
                    if(v[k].x >= v[i].x) u.push_back(v[k]);
                    else w.push_back(v[k]);
                }
                else if(v[i].y == v[j].y) {
                    if(v[k].y >= v[i].y) u.push_back(v[k]);
                    else w.push_back(v[k]);
                }
                else {
                    if(ccw(v[i], v[j], v[k]) >= 0) u.push_back(v[k]);
                    else w.push_back(v[k]);
                }
            }

            adj.clear();
            adj.resize(u.size());

            for(int k=0; k<u.size(); k++)
                for(int l=0; l<w.size(); l++)
                    if(dis(u[k], w[l]) > r) adj[k].push_back(l);

            ll.clear(); ll.resize(u.size(), -1);
            rr.clear(); rr.resize(w.size(), -1);

            int match = 0;

            for(int k=0; k<u.size(); k++) {
                vis.clear();
                vis.resize(u.size());

                if(f(k)) match++;
            }

            if(2 + u.size() + w.size() - match <= ans.size()) continue;

            vector<bool> lvis(u.size()), rvis(w.size());

            for(int k=0; k<u.size(); k++) {
                if(ll[k] != -1 || lvis[k]) continue;

                lvis[k] = true;

                queue<pair<bool, int>> q;
                q.push({true, k});

                while(!q.empty()) {
                    bool isLeft = q.front().first;
                    int x = q.front().second;
                    q.pop();

                    if(isLeft) {
                        for(int l=0; l<adj[x].size(); l++) {
                            int y = adj[x][l];

                            if(ll[x] != y && !rvis[y]) {
                                rvis[y] = true;
                                q.push({false, y});
                            }
                        }
                    }
                    else {
                        for(int l=0; l<u.size(); l++) {
                            int y = l;

                            if(lvis[y]) continue;
                            if(count(adj[y].begin(), adj[y].end(), x) == 0) continue;

                            for(int m=0; m<adj[y].size(); m++) {
                                if(adj[y][m] != x) continue;

                                if(rr[x] == y) {
                                    lvis[y] = true;
                                    q.push({true, y});
                                }
                            }
                        }
                    }
                }
            }

            ans.clear();
            ans.push_back(v[i].n);
            ans.push_back(v[j].n);

            for(int k=0; k<u.size(); k++)
                if(lvis[k]) ans.push_back(u[k].n);

            for(int k=0; k<w.size(); k++)
                if(!rvis[k]) ans.push_back(w[k].n);
        }

    cout << ans.size() << "\n";

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
