#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    for(int i=0; i<3; i++) scanf("%d", &arr[i]);
    sort(arr, arr+3);
    if(arr[1]-arr[0] == arr[2]-arr[1]) printf("%d", arr[2] + (arr[2]-arr[1]));
    else if(2*(arr[1]-arr[0]) == arr[2]-arr[1]) printf("%d", arr[1] + (arr[1]-arr[0]));
    else if(2*(arr[2]-arr[1]) == arr[1]-arr[0]) printf("%d", arr[0] + (arr[2]-arr[1]));
}
