#include <bits/stdc++.h>
using namespace std;

struct Point { int x, y; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<Point> apple(K);
    for(int i=0; i<K; i++)
        cin >> apple[i].x >> apple[i].y;

    int L; cin >> L;

    vector<pair<int, char>> rot(L); // <time, direction>
    for(int i=0; i<L; i++)
        cin >> rot[i].first >> rot[i].second;

    deque<Point> snake;
    snake.push_front({1, 1});

    int dir = 1; // up : 0 / right : 1 / down : 2 / left : 3

    int time = 0;
    while(true) {
        time++;

        Point head = snake.front();

        if(dir == 0) snake.push_front({head.x - 1, head.y});
        else if(dir == 1) snake.push_front({head.x, head.y + 1});
        else if(dir == 2) snake.push_front({head.x + 1, head.y});
        else snake.push_front({head.x, head.y - 1});

        head = snake.front();
        if(head.x < 1 || head.y < 1 || head.x > N || head.y > N) break;

        bool check = true;
        for(int i=0; i<snake.size(); i++) {
            Point pop = snake.front();
            snake.pop_front();

            if(i != 0 && (head.x == pop.x && head.y == pop.y)) {
                check = false;
                break;
            }

            snake.push_back(pop);
        }
        if(!check) break;

        check = false;
        for(int i=0; i<K; i++)
            if(head.x == apple[i].x && head.y == apple[i].y) {
                check = true;
                apple[i] = {0, 0};
            }
        if(!check) snake.pop_back();

        for(int i=0; i<L; i++)
            if(time == rot[i].first) {
                if(rot[i].second == 'L') dir = (dir - 1 + 4) % 4;
                else dir = (dir + 1) % 4;
            }
    }

    cout << time << "\n";
}
