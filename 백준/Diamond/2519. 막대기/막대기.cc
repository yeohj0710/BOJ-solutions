#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };

bool operator== (s a, s b) {
    if(a.x == b.x && a.y == b.y) return true;
    else return false;
}
bool operator>= (s a, s b) {
    if(a.x > b.x || (a.x == b.x && a.y >= b.y)) return true;
    else return false;
}
bool operator<= (s a, s b) {
    if(a.x < b.x || (a.x == b.x && a.y <= b.y)) return true;
    else return false;
}
bool operator> (s a, s b) {
    if(a.x > b.x || (a.x == b.x && a.y > b.y)) return true;
    else return false;
}
bool operator< (s a, s b) {
    if(a.x < b.x || (a.x == b.x && a.y < b.y)) return true;
    else return false;
}

int ccw(s a, s b, s c) {
    int val = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);

    if(val == 0) return 0;
    else if(val > 0) return 1;
    else if(val < 0) return -1;
}

bool cross, overlap;
double cx, cy;

void coor(s a, s b, s c, s d) {
    double X = (a.x * b.y - a.y * b.x) * (c.x - d.x) - (a.x - b.x) * (c.x * d.y - c.y * d.x);
    double Y = (a.x * b.y - a.y * b.x) * (c.y - d.y) - (a.y - b.y) * (c.x * d.y - c.y * d.x);
    double div = (a.x - b.x) * (c.y - d.y) - (a.y - b.y) * (c.x - d.x);

    if(div == 0) {
        if(b == c && a <= c) cx = b.x, cy = b.y, overlap = false;
        else if(a == d && c <= a) cx = a.x, cy = a.y, overlap = false;
        else overlap = true;
    }
    else cx = X / div, cy = Y / div, overlap = false;
}

void inter(s a, s b, s c, s d) {
    int val1 = ccw(a, b, c) * ccw(a, b, d);
    int val2 = ccw(c, d, a) * ccw(c, d, b);

    if(val1 == 0 && val2 == 0) {
        if(a > b) swap(a, b);
        if(c > d) swap(c, d);

        if(a <= d && b >= c) {
            cross = true;
            coor(a, b, c, d);
        }
        else cross = false;
    }
    else {
        if(val1 <= 0 && val2 <= 0) {
            cross = true;
            coor(a, b, c, d);
        }
        else cross = false;
    }
}

vector<vector<int>> adj, scc;
vector<int> nnum, cnum;
int ncnt = 0, ccnt = 0;

stack<int> st;
vector<bool> ch;

int dfs(int x) {
    nnum[x] = ++ncnt;
    st.push(x);

    int tmp = nnum[x];

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(nnum[y] == 0) tmp = min(tmp, dfs(y));
        else if(!ch[y]) tmp = min(tmp, nnum[y]);
    }

    if(tmp == nnum[x]) {
        vector<int> v;
        ccnt++;

        while(true) {
            int y = st.top();
            st.pop();

            v.push_back(y);

            ch[y] = true;
            cnum[y] = ccnt;

            if(y == x) break;
        }

        sort(v.begin(), v.end());

        scc.push_back(v);
    }

    return tmp;
}

int cvt(int x) {
    if(x < 0) return (-x)*2 - 2;
    else return x*2 - 1;
}

int cvtn(int x) {
    x = cvt(x);

    if(x % 2 == 0) return x + 1;
    else return x - 1;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    N *= 3;

    vector<vector<s>> v(N+1, vector<s>(2));

    for(int i=1; i<=N; i++)
        cin >> v[i][0].x >> v[i][0].y >> v[i][1].x >> v[i][1].y;

    adj.resize(N*2);

    for(int i=1; i<=N; i+=3) {
        adj[cvt(i)].push_back(cvtn(i+1));
        adj[cvt(i)].push_back(cvtn(i+2));

        adj[cvt(i+1)].push_back(cvtn(i));
        adj[cvt(i+1)].push_back(cvtn(i+2));

        adj[cvt(i+2)].push_back(cvtn(i));
        adj[cvt(i+2)].push_back(cvtn(i+1));
    }

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            inter(v[i][0], v[i][1], v[j][0], v[j][1]);

            if(cross) {
                adj[cvtn(i)].push_back(cvt(j));
                adj[cvtn(j)].push_back(cvt(i));
            }
        }

    nnum.resize(N*2);
    cnum.resize(N*2);
    ch.resize(N*2);

    for(int i=0; i<N*2; i++)
        if(nnum[i] == 0) dfs(i);

    bool check = true;

    for(int i=0; i<N; i++) {
        if(cnum[i*2] == cnum[i*2 + 1]) {
            check = false;
            break;
        }
    }

    if(!check) {
        cout << -1 << "\n";
        return 0;
    }

    vector<pair<int, int>> p(N*2);
    for(int i=0; i<N*2; i++) p[i] = {cnum[i], i};

    sort(p.begin(), p.end(), greater<pair<int, int>>());

    vector<int> tf(N*2, -1);

    for(int i=0; i<N*2; i++) {
        int x = p[i].second;

        if(tf[x/2] == -1) {
            if(x % 2 == 1) tf[x/2] = 0;
            else tf[x/2] = 1;
        }
    }

    vector<int> u;

    for(int i=0; i<N; i++)
        if(tf[i]) u.push_back(i+1);

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
