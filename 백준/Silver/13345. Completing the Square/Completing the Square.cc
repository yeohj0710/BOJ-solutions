#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; };

double dis(s a, s b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<s> v(3);

    for(int i=0; i<3; i++) cin >> v[i].x >> v[i].y;

    if(dis(v[0], v[1]) > dis(v[1], v[2]) && dis(v[0], v[1]) > dis(v[0], v[2])) swap(v[0], v[2]);
    else if(dis(v[0], v[2]) > dis(v[0], v[1]) && dis(v[0], v[2]) > dis(v[1], v[2])) swap(v[0], v[1]);

    s m;

    m.x = (v[1].x + v[2].x) / 2;
    m.y = (v[1].y + v[2].y) / 2;

    s ans;

    ans.x = v[0].x + (m.x - v[0].x) * 2;
    ans.y = v[0].y + (m.y - v[0].y) * 2;

    cout << (int)ans.x << " " << (int)ans.y << "\n";
}
