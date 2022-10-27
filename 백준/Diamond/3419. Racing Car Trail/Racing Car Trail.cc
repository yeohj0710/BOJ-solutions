#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj1, adj2;
vector<int> l1, r1, l2, r2;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj1[x].size(); i++) {
        int y = adj1[x][i];

        if(r1[y] == -1 || (!vis[r1[y]] && f(r1[y]))) {
            l1[x] = y, r1[y] = x;

            return true;
        }
    }

    return false;
}

bool g(int x) {
    vis[x] = true;

    for(int i=0; i<adj2[x].size(); i++) {
        int y = adj2[x][i];

        if(r2[y] == -1 || (!vis[r2[y]] && g(r2[y]))) {
            l2[x] = y, r2[y] = x;

            return true;
        }
    }

    return false;
}

vector<vector<int>> tadj;
vector<int> ll, rr;

bool h(int x) {
    vis[x] = true;

    for(int i=0; i<tadj[x].size(); i++) {
        int y = tadj[x][i];

        if(rr[y] == -1 || (!vis[rr[y]] && h(rr[y]))) {
            ll[x] = y, rr[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<vector<char>> v(N+1, vector<char>(M+1));

        for(int i=1; i<=N; i++)
            for(int j=1; j<=M; j++) cin >> v[i][j];

        int s = (N*M + 1) / 2;

        int di[4] = {1, -1, 0, 0};
        int dj[4] = {0, 0, 1, -1};

        adj1.clear();
        adj1.resize(s+1);

        for(int i=1; i<=N; i++)
            for(int j=!(i%2)+1; j<=M; j+=2) {
                if(v[i][j] != '.') continue;

                for(int k=0; k<4; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                    if(v[ni][nj] != '.') continue;

                    adj1[((i-1)*M+j+1)/2].push_back(((ni-1)*M+nj+1)/2);
                }
            }

        l1.clear();
        l1.resize(s+1, -1);

        r1.clear();
        r1.resize(s+1, -1);

        for(int i=1; i<=s; i++) {
            vis.clear();
            vis.resize(s+1);

            f(i);
        }

        adj2.clear();
        adj2.resize(s+1);

        for(int i=1; i<=N; i++)
            for(int j=(i%2)+1; j<=M; j+=2) {
                if(v[i][j] != '.') continue;

                for(int k=0; k<4; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                    if(v[ni][nj] != '.') continue;

                    adj2[((i-1)*M+j+1)/2].push_back(((ni-1)*M+nj+1)/2);
                }
            }

        l2.clear();
        l2.resize(s+1, -1);

        r2.clear();
        r2.resize(s+1, -1);

        for(int i=1; i<=s; i++) {
            vis.clear();
            vis.resize(s+1);

            g(i);
        }

        vector<vector<char>> w(v);

        for(int ii=1; ii<=N; ii++)
            for(int jj=1; jj<=M; jj++) {
                if(v[ii][jj] != '.') continue;

                int x = ((ii-1)*M+jj+1)/2;

                bool check = false;

                if((ii + jj) % 2 == 1 && r1[x] == -1) check = true;
                if((ii + jj) % 2 == 0 && r2[x] == -1) check = true;

                if(check) {
                    w[ii][jj] = 'B';
                    continue;
                }

                if((ii + jj) % 2 == 1) {
                    tadj.clear(); tadj = adj1;

                    for(int k=0; k<4; k++) {
                        int ni = ii + di[k];
                        int nj = jj + dj[k];

                        if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                        if(v[ni][nj] != '.') continue;

                        int y = ((ni-1)*M+nj+1)/2;

                        if(count(tadj[y].begin(), tadj[y].end(), x) > 0)
                            tadj[y].erase(remove(tadj[y].begin(), tadj[y].end(), x), tadj[y].end());
                    }

                    ll.clear(); ll = l1;
                    rr.clear(); rr = r1;

                    int z = rr[x];

                    ll[rr[x]] = -1;
                    rr[x] = -1;

                    vis.clear(); vis.resize(s+1);

                    if(h(z)) w[ii][jj] = 'B';
                    else w[ii][jj] = 'A';
                }
                if((ii + jj) % 2 == 0) {
                    tadj.clear(); tadj = adj2;

                    for(int k=0; k<4; k++) {
                        int ni = ii + di[k];
                        int nj = jj + dj[k];

                        if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                        if(v[ni][nj] != '.') continue;

                        int y = ((ni-1)*M+nj+1)/2;

                        if(count(tadj[y].begin(), tadj[y].end(), x) > 0)
                            tadj[y].erase(remove(tadj[y].begin(), tadj[y].end(), x), tadj[y].end());
                    }

                    ll.clear(); ll = l2;
                    rr.clear(); rr = r2;

                    vis.clear(); vis.resize(s+1);

                    int z = rr[x];

                    ll[rr[x]] = -1;
                    rr[x] = -1;

                    if(h(z)) w[ii][jj] = 'B';
                    else w[ii][jj] = 'A';
                }
            }

        for(int i=1; i<=N; i++) {
            for(int j=1; j<=M; j++) cout << w[i][j];
            cout << "\n";
        }
        cout << "\n";
    }
}
