#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    
    for(int i=0; i<places.size(); i++) {
        bool chk = true;
        
        for(int j=0; j<places[i].size(); j++) {
            for(int k=0; k<places[i][j].length(); k++) {
                int dx[4] = {1, -1, 0, 0};
                int dy[4] = {0, 0, 1, -1};
                
                if(places[i][j][k] == 'O') {
                    int cnt = 0;

                    for(int l=0; l<4; l++) {
                        int nx = j + dx[l];
                        int ny = k + dy[l];

                        if(nx < 0 || ny < 0 || nx >= places[i].size() || nx >= places[i][j].length()) continue;
                        if(places[i][nx][ny] == 'P') cnt++;
                    }

                    if(cnt >= 2) chk = false;
                }
                
                if(places[i][j][k] == 'P') {
                    for(int l=0; l<4; l++) {
                        int nx = j + dx[l];
                        int ny = k + dy[l];

                        if(nx < 0 || ny < 0 || nx >= places[i].size() || nx >= places[i][j].length()) continue;
                        if(places[i][nx][ny] == 'P') chk = false;
                    }
                }
            }
        }
        
        if(chk) answer.push_back(1);
        else answer.push_back(0);
    }
    
    return answer;
}