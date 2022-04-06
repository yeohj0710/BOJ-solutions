#include <cstdio>
using namespace std;

int main() {
    int N;
    double coor[10005][2], sum = 0;
    scanf("%d" ,&N);
    for(int i=0; i<N; i++) scanf("%lf %lf", &coor[i][0], &coor[i][1]);
    for(int i=0; i<N-1; i++) {
        sum += 0.5 * (coor[0][0]*coor[i][1] + coor[i][0]*coor[i+1][1] + coor[i+1][0]*coor[0][1]
                        - coor[i][0]*coor[0][1] - coor[i+1][0]*coor[i][1] - coor[0][0]*coor[i+1][1]);
    }
    printf("%.1lf", sum>=0?sum:-sum);
}
