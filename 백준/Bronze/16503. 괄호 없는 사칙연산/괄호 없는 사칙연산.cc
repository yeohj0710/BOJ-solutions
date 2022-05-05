#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; char x, y;
    cin >> a >> x >> b >> y >> c;

    vector<int> ans;

    int temp;

    if(x == '+') temp = a + b;
    else if(x == '-') temp = a - b;
    else if(x == '*') temp = a * b;
    else if(x == '/') temp = a / b;

    if(y == '+') temp = temp + c;
    else if(y == '-') temp = temp - c;
    else if(y == '*') temp = temp * c;
    else if(y == '/') temp = temp / c;

    ans.push_back(temp);

    if(y == '+') temp = b + c;
    else if(y == '-') temp = b - c;
    else if(y == '*') temp = b * c;
    else if(y == '/') temp = b / c;

    if(x == '+') temp = a + temp;
    else if(x == '-') temp = a - temp;
    else if(x == '*') temp = a * temp;
    else if(x == '/') temp = a / temp;

    ans.push_back(temp);

    sort(ans.begin(), ans.end());

    cout << ans[0] << "\n" << ans[1] << "\n";
}
