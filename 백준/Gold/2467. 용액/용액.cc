#include <cstdio>
#define INF 2147483647
using namespace std;

int arr[100005] = {0, };
int abs(int a) { return a>=0?a:-a; }

int main() {
    int N, left, right, Min = INF, min_left, min_right;
    scanf("%d" ,&N);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    left = 0, right = N-1, min_left = 0, min_right = N-1;
    while(left < right) {
        if(abs(arr[left]+arr[right]) < Min) {
            Min = abs(arr[left]+arr[right]);
            min_left = left, min_right = right;
        }
        if(arr[left]+arr[right] == 0) break;
        else if(arr[left]+arr[right] > 0) right--;
        else if(arr[left]+arr[right] < 0) left++;
    }
    printf("%d %d", arr[min_left], arr[min_right]);
}
