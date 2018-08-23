#include <bits/stdc++.h>

using namespace std;

int matrix[5][5];

int main(){

    int x, y;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]) {
                x = i; y = j;
            }
        }
    }

    int ans = abs(2 - x) + abs(2 - y);
    cout << ans << endl;

    return 0;
}