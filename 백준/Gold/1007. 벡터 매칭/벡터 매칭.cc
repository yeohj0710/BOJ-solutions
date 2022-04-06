#include <iostream>
#include <cmath>
#define INF 1000000000
using namespace std;

int T, N;
double vec[21][2], selected[21] = {0, }, sum_x, sum_y, temp_x, temp_y, sum, Min;
double Abs(double a) { return a>=0?a:-a; }

void calc_sum() {
    for(int i=0; i<N; i++)
        if(!selected[i]) {
            sum_x -= 2*vec[i][0];
            sum_y -= 2*vec[i][1];
        }
    sum = sqrt(sum_x*sum_x + sum_y*sum_y);
    if(Abs(sum) < Min) Min = Abs(sum);
}

void selection(int cnt, int recent) {
    if(cnt <= 0) {
        temp_x = sum_x;
        temp_y = sum_y;
        calc_sum();
        sum_x = temp_x;
        sum_y = temp_y;
        return;
    }
    for(int i=recent; i<N; i++) {
        if(!selected[i]) {
            selected[i] = 1;
            selection(cnt-1, i+1);
            selected[i] = 0;
        }
    }
}


int main() {
    cin >> T;
    for(int i=0; i<T; i++) {
        Min = INF, sum_x = sum_y = 0;
        cin >> N;
        for(int j=0; j<N; j++) {
            cin >> vec[j][0] >> vec[j][1];
            sum_x += vec[j][0];
            sum_y += vec[j][1];
        }
        selection(N/2, 0);
        printf("%.7lf\n", Min);
    }
}
