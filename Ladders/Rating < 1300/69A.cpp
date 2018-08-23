#include <bits/stdc++.h>

using namespace std;

int A, B, C;
int N;

int main(){

    int x, y, z;

    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d %d", &x, &y, &z);
        A += x; B += y; C += z;
    }    

    if (A == 0 && B == 0 && C == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}