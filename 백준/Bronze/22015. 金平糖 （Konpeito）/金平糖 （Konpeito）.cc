#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int Arr[3];
    scanf("%d %d %d", &Arr[0], &Arr[1], &Arr[2]);
    sort(Arr, Arr+3);
    printf("%d", Arr[2]-Arr[0] + Arr[2]-Arr[1]);
}
