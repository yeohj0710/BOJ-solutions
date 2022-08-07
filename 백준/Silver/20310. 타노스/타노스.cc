#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    string str; cin >> str;
    
    int a = 0, b = 0;
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') a++;
        else b++;
    }
    
    vector<bool> v(str.length());
    
    int cnt = 0;
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') continue;
        
        v[i] = true;
        
        cnt++;
        if(cnt == b/2) break;
    }
    
    cnt = 0;
    
    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] == '1') continue;
        
        v[i] = true;
        
        cnt++;
        if(cnt == a/2) break;
    }
    
    string ans = "";
    
    for(int i=0; i<v.size(); i++)
        if(!v[i]) ans += str[i];
        
    cout << ans << "\n";
}