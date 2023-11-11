#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int ret = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            ret = ret * 10 + (s[i] - '0');
            continue;
        }
            
        for(int j=0; j<v.size(); j++)
            if(i + v[j].length() <= s.length() && s.substr(i, v[j].length()) == v[j]) {
                ret = ret * 10 + j;
                break;
            }
    }
    
    return ret;
}